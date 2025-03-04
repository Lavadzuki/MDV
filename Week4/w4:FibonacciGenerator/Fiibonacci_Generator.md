# 🚀 Summary: Fixing the Fibonacci Generator

## **📌 Problem Statement**
The Fibonacci sequence was **not updating correctly** in the Verilog module, producing incorrect values like `5 → 7 → 9 → 12` instead of the expected Fibonacci numbers (`0, 1, 1, 2, 3, 5, 8, ...`).

## **🔍 Root Cause**
The issue was due to the **incorrect update order** in the `always` block:

```verilog
fib_out   <= fib_prev1 + fib_prev2;
fib_prev2 <= fib_prev1;
fib_prev1 <= fib_out; // ❌ Using fib_out directly caused a timing issue
```

### **🔎 Why Did This Cause an Issue?**
- In Verilog, **all non-blocking (`<=`) assignments execute simultaneously** at the clock edge.
- `fib_prev1` was being assigned **fib_out**, but `fib_out` **had not yet been updated**.
- This caused a **one-cycle delay**, leading to incorrect Fibonacci numbers.

| **Clock Cycle** | **fib_prev1 (F(n-1))** | **fib_prev2 (F(n-2))** | **fib_out (F(n))** |
|---------------|-------------------|-------------------|------------------|
| **Initial (Reset)** | 1 | 0 | 0 |
| **Cycle 1** | **1** | **0** | **1** (✔️ `1 + 0`) |
| **Cycle 2** | **1** | **1** | **2** (✔️ `1 + 1`) |
| **Cycle 3** | **2** | **1** | **3** (✔️ `2 + 1`) |
| **Cycle 4** | **3** | **2** | **5** (✔️ `3 + 2`) |
| **Cycle 5** | **5** | **3** | **8** (✔️ `5 + 3`) |

---

## **🛠️ Solution: Fix the Update Order**
### **🔎 Corrected Code:**
```verilog
always @(posedge clk or posedge rst) begin
    if (rst) begin
        fib_prev1 <= 32'd1;
        fib_prev2 <= 32'd0;
        fib_out   <= 32'd0;
    end else if (enable) begin
        fib_out   <= fib_prev1 + fib_prev2;
        
        // ✅ Correct update order
        fib_prev2 <= fib_prev1;
        fib_prev1 <= fib_prev1 + fib_prev2; // Instead of using fib_out directly
    end
end
```

### **📐 Why This Works**
- **Verilog non-blocking assignments (`<=`) update simultaneously** at the clock edge.
- `fib_prev2` is updated **before** `fib_prev1`, so `fib_prev1` always has the correct previous Fibonacci value.
- `fib_prev1` is now **directly updated with the sum** (`fib_prev1 + fib_prev2`) instead of using `fib_out`, ensuring no delays.
- Now, the Fibonacci sequence follows the correct pattern: `0, 1, 1, 2, 3, 5, 8, ...`

---

## **🎯 Key Takeaways**
| **Issue** | **Fix** |
|-----------|--------|
| `fib_prev1` was getting an outdated `fib_out` | ✅ **Update `fib_prev1` using `fib_prev1 + fib_prev2` directly** |
| `fib_prev2` was being assigned too late | ✅ **Update `fib_prev2` before `fib_prev1`** |
| `fib_out` was missing correct values | ✅ **Compute `fib_out` first, then update registers** |


