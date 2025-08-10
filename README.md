# 2D-arrays
### **Experiment 1: Matrix Addition**

**Aim:** To write a C++ program to add two matrices.

**Theory:** Matrix addition involves adding corresponding elements of two matrices with the same dimensions.

**Algorithm:**
1.  Input dimensions and elements for two matrices, A and B.
2.  Verify that both matrices have the same number of rows and columns.
3.  Create a result matrix, C.
4.  Use nested loops to calculate $C_{ij} = A_{ij} + B_{ij}$ for all elements.
5.  Display the resulting matrix C.

### **Experiment 2: Matrix Transpose**

**Aim:** To write a C++ program to find the transpose of a matrix.

**Theory:** The transpose of a matrix is created by flipping it over its diagonal, switching the row and column indices. The element $A_{ij}$ becomes $A^T_{ji}$.

**Algorithm:**
1.  Input matrix dimensions (`r`, `c`) and elements for matrix A.
2.  Create a new matrix, B, for the transpose.
3.  Use nested loops to assign elements such that $B_{ji} = A_{ij}$.
4.  Display the transposed matrix B.

### **Experiment 3: Matrix Multiplication**

**Aim:** To write a C++ program to multiply two matrices.

**Theory:** Matrix multiplication is only possible if the number of columns in the first matrix equals the number of rows in the second. The resulting matrix's element $C_{ij}$ is the dot product of row $i$ of the first matrix and column $j$ of the second.

**Algorithm:**
1.  Input dimensions for two matrices, A ($r1 \times c1$) and B ($r2 \times c2$).
2.  Check if $c1 = r2$. If not, output an error and terminate.
3.  Create a result matrix C ($r1 \times c2$) initialized to zeros.
4.  Use three nested loops to compute $C_{ij} = \sum_{k=0}^{c1-1} A_{ik} \times B_{kj}$.
5.  Display the resulting matrix C.

### **Experiment 4: Sum of Diagonal of a Matrix**

**Aim:** To write a C++ program to find the sum of a matrix's diagonal elements.

**Theory:** The main diagonal of a square matrix consists of elements where the row and column indices are equal, i.e., $A_{ii}$.

**Algorithm:**
1.  Input dimensions (`r`, `c`) for a matrix A.
2.  Input the elements of matrix A.
3.  Initialize a variable `sum` to 0.
4.  Use nested loops to iterate through the matrix.
5.  Inside the loop, if the row index `i` equals the column index `j`, add the element $A_{ij}$ to `sum`.
6.  Display the final `sum`.

### **Experiment 5: Input and Display of Two Matrices**

**Aim:** To write a C++ program to input and display two matrices.

**Theory:** This experiment focuses on the fundamental programming task of using nested loops to handle two-dimensional arrays (matrices). It involves getting user input for matrix dimensions, populating the matrices with elements, and then printing the contents of both matrices in a readable format.

**Algorithm:**
1.  Declare variables for rows and columns for two matrices (`r1`, `c1`, `r2`, `c2`).
2.  Prompt the user to input the dimensions.
3.  Declare two 2D arrays, `a[r1][c1]` and `b[r2][c2]`.
4.  Use nested loops to get user input for the elements of the first matrix `a`.
5.  Use another set of nested loops to get user input for the elements of the second matrix `b`.
6.  Use nested loops to display the elements of the first matrix `a`.
7.  Use nested loops to display the elements of the second matrix `b`.

### **Conclusion**

These experiments successfully implemented C++ programs for fundamental matrix operations: input/display, addition, transpose, multiplication, and finding the sum of diagonal elements. The programs demonstrated using nested loops for matrix manipulation and highlighted the importance of adhering to mathematical rules, such as checking for compatible dimensions before operations.
