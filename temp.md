The Rational Root Theorem is a useful tool for finding the possible rational roots of a polynomial equation with integer coefficients. Here are the steps to apply the Rational Root Theorem, followed by two example problems.

## Steps to Apply the Rational Root Theorem

1. **Identify the Polynomial**: Write down the polynomial equation in standard form \( f(x) = a_n x^n + a_{n-1} x^{n-1} + \ldots + a_1 x + a_0 \).

2. **List Factors of the Constant Term**: Identify the constant term \( a_0 \) and list all its factors (both positive and negative).

3. **List Factors of the Leading Coefficient**: Identify the leading coefficient \( a_n \) and list all its factors (both positive and negative).

4. **Form Possible Rational Roots**: Create a list of all possible rational roots by taking each factor of the constant term \( a_0 \) and dividing it by each factor of the leading coefficient \( a_n \). These possible roots will be in the form \( \frac{p}{q} \), where \( p \) is a factor of \( a_0 \) and \( q \) is a factor of \( a_n \).

5. **Test Possible Roots**: Substitute each possible rational root into the polynomial equation to determine if it is an actual root (i.e., if it makes the polynomial equal to zero).

## Example 1

### Problem
Find the rational roots of the polynomial \( f(x) = 2x^3 - 3x^2 - 8x + 3 \).

### Solution

1. **Identify the Polynomial**: \( f(x) = 2x^3 - 3x^2 - 8x + 3 \).

2. **List Factors of the Constant Term**: The constant term \( a_0 = 3 \). Its factors are \( \pm 1, \pm 3 \).

3. **List Factors of the Leading Coefficient**: The leading coefficient \( a_n = 2 \). Its factors are \( \pm 1, \pm 2 \).

4. **Form Possible Rational Roots**: The possible rational roots are:
   - \( \frac{\pm 1}{\pm 1} = \pm 1 \)
   - \( \frac{\pm 3}{\pm 1} = \pm 3 \)
   - \( \frac{\pm 1}{\pm 2} = \pm \frac{1}{2} \)
   - \( \frac{\pm 3}{\pm 2} = \pm \frac{3}{2} \)

   So, the possible rational roots are \( \pm 1, \pm 3, \pm \frac{1}{2}, \pm \frac{3}{2} \).

5. **Test Possible Roots**:
   - Test \( x = 1 \):
     \( f(1) = 2(1)^3 - 3(1)^2 - 8(1) + 3 = 2 - 3 - 8 + 3 = -6 \) (not a root)
   - Test \( x = -1 \):
     \( f(-1) = 2(-1)^3 - 3(-1)^2 - 8(-1) + 3 = -2 - 3 + 8 + 3 = 6 \) (not a root)
   - Test \( x = 3 \):
     \( f(3) = 2(3)^3 - 3(3)^2 - 8(3) + 3 = 54 - 27 - 24 + 3 = 6 \) (not a root)
   - Test \( x = -3 \):
     \( f(-3) = 2(-3)^3 - 3(-3)^2 - 8(-3) + 3 = -54 - 27 + 24 + 3 = -54 \) (not a root)
   - Test \( x = \frac{1}{2} \):
     \( f\left(\frac{1}{2}\right) = 2\left(\frac{1}{2}\right)^3 - 3\left(\frac{1}{2}\right)^2 - 8\left(\frac{1}{2}\right) + 3 = \frac{1}{4} - \frac{3}{4} - 4 + 3 = -1 \) (not a root)
   - Test \( x = -\frac{1}{2} \):
     \( f\left(-\frac{1}{2}\right) = 2\left(-\frac{1}{2}\right)^3 - 3\left(-\frac{1}{2}\right)^2 - 8\left(-\frac{1}{2}\right) + 3 = -\frac{1}{4} - \frac{3}{4} + 4 + 3 = 6 \) (not a root)
   - Test \( x = \frac{3}{2} \):
     \( f\left(\frac{3}{2}\right) = 2\left(\frac{3}{2}\right)^3 - 3\left(\frac{3}{2}\right)^2 - 8\left(\frac{3}{2}\right) + 3 = \frac{27}{4} - \frac{27}{4} - 12 + 3 = -9 \) (not a root)
   - Test \( x = -\frac{3}{2} \):
     \( f\left(-\frac{3}{2}\right) = 2\left(-\frac{3}{2}\right)^3 - 3\left(-\frac{3}{2}\right)^2 - 8\left(-\frac{3}{2}\right) + 3 = -\frac{27}{4} - \frac{27}{4} + 12 + 3 = 6 \) (not a root)

   After testing all possible rational roots, we find that none of them are actual roots. Therefore, this polynomial does not have any rational roots.

## Example 2

### Problem
Find the rational roots of the polynomial \( f(x) = x^3 - 6x^2 + 11x - 6 \).

### Solution

1. **Identify the Polynomial**: \( f(x) = x^3 - 6x^2 + 11x - 6 \).

2. **List Factors of the Constant Term**: The constant term \( a_0 = 6 \). Its factors are \( \pm 1, \pm 2, \pm 3, \pm 6 \).

3. **List Factors of the Leading Coefficient**: The leading coefficient \( a_n = 1 \). Its factors are \( \pm 1 \).

4. **Form Possible Rational Roots**: The possible rational roots are:
   - \( \frac{\pm 1}{\pm 1} = \pm 1 \)
   - \( \frac{\pm 2}{\pm 1} = \pm 2 \)
   - \( \frac{\pm 3}{\pm 1} = \pm 3 \)
   - \( \frac{\pm 6}{\pm 1} = \pm 6 \)

   So, the possible rational roots are \( \pm 1, \pm 2, \pm 3, \pm 6 \).

5. **Test Possible Roots**:
   - Test \( x = 1 \):
     \( f(1) = (1)^3 - 6(1)^2 + 11(1) - 6 = 1 - 6 + 11 - 6 = 0 \) (root found)
   - Test \( x = 2 \):
     \( f(2) = (2)^3 - 6(2)^2 + 11(2) - 6 = 8 - 24 + 22 - 6 = 0 \) (root found)
   - Test \( x = 3 \):
     \( f(3) = (3)^3 - 6(3)^2 + 11(3) - 6 = 27 - 54 + 33 - 6 = 0 \) (root found)

   Therefore, the rational roots of the polynomial \( f(x) = x^3 - 6x^2 + 11x - 6 \) are \( x = 1, 2, 3 \).

By following these steps, you can systematically determine the possible rational roots of any polynomial and test them to find the actual roots.
[1] https://www.cuemath.com/algebra/rational-root-theorem/
[2] http://rowsontutoring.com/math/rational-root/
[3] https://matterofmath.com/algebra/rational-root-theorem/
[4] https://www.youtube.com/watch?v=4XytYH35AP0
[5] https://www.sparknotes.com/math/algebra2/polynomials/section4/
[6] https://www.chilimath.com/lessons/intermediate-algebra/rational-roots-test/
[7] https://www.colonialsd.org/uploaded/Forms_and_Documents/Curriculum/Math/Integrated_Math/Blue_Unit_6/Review_and_Examples_of_Using_the_Rational_Root_Theorem.pdf
[8] https://artofproblemsolving.com/wiki/index.php/Rational_root_theorem
[9] https://www.reddit.com/r/math/comments/5uf0in/simplification_of_the_rational_root_theorem/
[10] https://www.quora.com/How-do-you-use-the-rational-root-theorem-to-solve-a-polynomial-with-no-constant-term
[11] https://study.com/academy/lesson/how-to-use-the-rational-roots-theorem-process-examples.html
[12] https://www.youtube.com/watch?v=olvlaX_4Jmc
[13] https://cdn.kutasoftware.com/Worksheets/Alg2/Rational%20Root%20Theorem.pdf
[14] https://www.reddit.com/r/mathematics/comments/fsu30v/is_there_any_shortcut_method_or_a_simpler_way_to/
[15] https://www.youtube.com/watch?v=oodyL_ixw5k
[16] https://www.reddit.com/r/learnmath/comments/qlj0lg/quicker_way_to_find_factors_using_the_rational/
[17] https://math.libretexts.org/Bookshelves/Precalculus/Precalculus_(Tradler_and_Carley)/10%3A_Roots_of_Polynomials/10.01%3A_Optional_section-_The_rational_root_theorem
[18] https://www.youtube.com/watch?v=VJU8MEcHmEM
[19] https://www.youtube.com/watch?v=48Holjl94_M
[20] https://www.youtube.com/watch?v=Iaq7z7reznM
[21] https://www.greenemath.com/College_Algebra/144/Rational-Zeros-TheoremPracticeTest.html
[22] https://www.radfordmathematics.com/algebra/polynomial-functions-equations/polynomials-rational-root-theorem.html
[23] https://www.geeksforgeeks.org/rational-root-theorem/
[24] https://en.wikipedia.org/wiki/Rational_root_theorem
[25] https://www.youtube.com/watch?v=cA9cDTYq09I