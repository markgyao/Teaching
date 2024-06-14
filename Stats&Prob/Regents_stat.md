Sure! Here are the 14 questions based on the core concepts mentioned:

### Questions

1. **Mean (Average)**:
   A set of test scores is: 78, 85, 92, 88, 76, 95, 89. Calculate the mean.

2. **Median**:
   Find the median of the following data set: 78, 85, 92, 88, 76, 95, 89.

3. **Mode**:
   Find the mode of the following data set: 2, 3, 4, 4, 5, 6, 6, 6, 7, 8.

4. **Range**:
   Find the range of the following data set: 10, 12, 23, 23, 16, 23, 21, 16.

5. **Variance**:
   Calculate the sample variance of the following data set: 2, 4, 4, 4, 5, 5, 7, 9.

6. **Standard Deviation**:
   Calculate the sample standard deviation of the following data set: 2, 4, 4, 4, 5, 5, 7, 9.

7. **Z-score**:
   A student's test score is 78. The mean test score is 70 with a standard deviation of 5. What is the student's z-score?

8. **Probability**:
   A bag contains 5 red, 4 blue, and 6 green marbles. If one marble is drawn at random, what is the probability that it is either red or green?

9. **Normal Distribution**:
   The heights of students in a school are normally distributed with a mean of 65 inches and a standard deviation of 3 inches. What proportion of students are taller than 68 inches?

10. **Confidence Interval**:
    A sample of 50 students has a mean score of 82 with a standard deviation of 6. Construct a 95% confidence interval for the true mean score of all students.

11. **Hypothesis Testing**:
    A company claims that the average weight of their product is 500 grams. A sample of 20 products has a mean weight of 495 grams with a standard deviation of 10 grams. Test the company’s claim at the 0.05 significance level.

12. **Chi-square Test**:
    A researcher wants to determine if there is a significant difference in preferences for three types of soda. The observed frequencies are: Soda A - 25, Soda B - 35, Soda C - 40. The expected frequencies are equal for each type. Perform a chi-square test at the 0.05 significance level.

13. **Linear Regression**:
    Find the equation of the regression line for the following data: (1, 2), (2, 3), (3, 5), (4, 4).

14. **Correlation Coefficient**:
    Given the following pairs of values (x, y): (2, 3), (4, 5), (6, 7), (8, 9), calculate the correlation coefficient.

<div style="page-break-after: always"></div>

### Solutions

1. **Mean (Average)**:
   \[
   \text{Mean} (\bar{X}) = \frac{\sum X}{n} = \frac{78 + 85 + 92 + 88 + 76 + 95 + 89}{7} = \frac{603}{7} = 86.14
   \]

2. **Median**:
   Sort the data set: 76, 78, 85, 88, 89, 92, 95
   The median is the middle value:
   \[
   \text{Median} = 88
   \]

3. **Mode**:
   The mode is the value that appears most frequently:
   \[
   \text{Mode} = 6
   \]

4. **Range**:
   \[
   \text{Range} = \text{Maximum value} - \text{Minimum value} = 23 - 10 = 13
   \]

5. **Variance**:
   - Sample mean (\(\bar{X}\)):
     \[
     \bar{X} = \frac{2 + 4 + 4 + 4 + 5 + 5 + 7 + 9}{8} = \frac{40}{8} = 5
     \]
   - Variance (\(s^2\)):
     \[
     s^2 = \frac{\sum (X - \bar{X})^2}{n-1} = \frac{(2-5)^2 + (4-5)^2 + (4-5)^2 + (4-5)^2 + (5-5)^2 + (5-5)^2 + (7-5)^2 + (9-5)^2}{7}
     \]
     \[
     s^2 = \frac{9 + 1 + 1 + 1 + 0 + 0 + 4 + 16}{7} = \frac{32}{7} \approx 4.57
     \]

6. **Standard Deviation**:
   \[
   s = \sqrt{s^2} = \sqrt{4.57} \approx 2.14
   \]

7. **Z-score**:
   \[
   z = \frac{X - \mu}{\sigma} = \frac{78 - 70}{5} = 1.6
   \]

8. **Probability**:
   \[
   P(\text{Red or Green}) = P(\text{Red}) + P(\text{Green}) = \frac{5}{15} + \frac{6}{15} = \frac{11}{15}
   \]

9. **Normal Distribution**:
   \[
   z = \frac{X - \mu}{\sigma} = \frac{68 - 65}{3} = 1
   \]
   Using the Z-table, the cumulative probability for \(z = 1\) is 0.8413.
   \[
   \text{Proportion taller than 68 inches} = 1 - 0.8413 = 0.1587
   \]

10. **Confidence Interval**:
    \[
    \text{Margin of Error} = z_{\alpha/2} \times \frac{s}{\sqrt{n}} = 1.96 \times \frac{6}{\sqrt{50}} \approx 1.66
    \]
    \[
    \text{Confidence Interval} = \bar{X} \pm \text{Margin of Error} = 82 \pm 1.66 = (80.34, 83.66)
    \]

11. **Hypothesis Testing**:
    \[
    t = \frac{\bar{X} - \mu}{\frac{s}{\sqrt{n}}} = \frac{495 - 500}{\frac{10}{\sqrt{20}}} = \frac{-5}{2.236} \approx -2.24
    \]
    Critical value for t with 19 degrees of freedom at 0.05 significance level (two-tailed) is approximately ±2.093.
    Since -2.24 < -2.093, we reject the null hypothesis.

12. **Chi-square Test**:
    - Observed: [25, 35, 40]
    - Expected: \( \frac{25+35+40}{3} = 33.33 \) for each type.
    \[
    \chi^2 = \sum \frac{(O_i - E_i)^2}{E_i} = \frac{(25-33.33)^2}{33.33} + \frac{(35-33.33)^2}{33.33} + \frac{(40-33.33)^2}{33.33} = 2.08 + 0.083 + 1.33 = 3.493
    \]
    - Degrees of freedom \( df = 3 - 1 = 2 \)
    - Critical value from Chi-square table at 0.05 significance level: 5.991
    Since 3.493 < 5.991, we fail to reject the null hypothesis.

13. **Linear Regression**:
    \[
    y = mx + b
    \]
    - Calculate the slope (m):
      \[
      m = \frac{n(\sum xy) - (\sum x)(\sum y)}{n(\sum x^2) - (\sum x)^2}
      \]
      - \( n = 4 \)
      - \( \sum x = 1 + 2 + 3 + 4 = 10 \)
      - \( \sum y = 2 + 3 + 5 + 4 = 14 \)
      - \( \sum xy = 1*2 + 2*3 + 3*5 + 4*4 = 2 + 6 + 15 + 16 = 39 \)
      - \( \sum x^2 = 1^2 + 2^2 + 3^2 + 4^2 = 1 + 4 + 9 + 16 = 30 \)
      \[
      m = \frac{4(39) - 10(14)}{4(30) - 10^2} = \frac{156 - 140}{120 - 100} = \frac{16}{20} = 0.8
      \]
    - Calculate the y-intercept (b):
      \[
      b = \frac{\sum y - m\sum x}{n} = \frac{14 - 0.8(10)}{4} = \frac{14 - 8}{4} = 1.5
      \]
    - Regression line equation:
      \[
      y = 0.8x + 1.5
      \]

14. **Correlation Coefficient**:
    \[
    r = \frac{n(\sum xy) - (\sum x)(\sum y)}{\sqrt{[n\sum x^2 - (\sum x)^2][n\sum y^2 - (\sum y)^2]}}
    \]
    - \( n = 4 \)
    - \( \sum x = 2 + 4 + 6 + 8 = 20 \)
    - \( \sum y = 3 + 5 + 7 + 9 = 24 \)
    - \( \sum xy = (2*3) + (4*5) + (6*7) + (8*9) = 6 + 20 + 42 + 72 = 140 \)
    - \( \sum x^2 = 2^2 + 4^2 + 6^2 + 8^2 = 4 + 16 + 36 + 64 = 120 \)
    - \( \sum y^2 = 3^2 + 5^2 + 7^2 + 9^2 = 9 + 25 + 49 + 81 = 164 \)
    \[
    r = \frac{4(140) - 20(24)}{\sqrt{[4(120) - 20^2][4(164) - 24^2]}} = \frac{560 - 480}{\sqrt{[480 - 400][656 - 576]}} = \frac{80}{\sqrt{80 \times 80}} = \frac{80}{80} = 1
    \]

These questions and detailed solutions cover the core concepts essential for the statistics part of the Regents exam.