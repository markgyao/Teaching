Here are ten questions on finding probability using combinations and permutations, tailored for 8th-grade students. These questions cover a range of scenarios to help students understand and apply these concepts in different contexts.


### Permutations and Combinations 

Q1: How many ways can 6 students be arranged in a line?

Q2: How many ways can you choose 4 fruits from a basket containing 8 different fruits?

Q3: How many ways can you arrange the letters in the word "PEPPER"?

Q4: A committee of 3 people is to be formed from a group of 7 men and 5 women. How many ways can this be done if the committee must consist of exactly 2 men and 1 woman?

Q5: How many ways can you distribute 5 identical apples among 4 children?

Q6: How many different 5-digit numbers can be formed using the digits 1, 2, 3, 4, and 5 without repetition?

Q7: How many ways can you select a team of 4 people from a group of 10, where 2 people must be selected from a subgroup of 3 and the remaining from the other 7?

Q8: How many ways can 4 students be seated in a row if two of the students, A and B, must sit next to each other?

Q9: How many ways can you form a 3-digit number using the digits 1, 2, 3, 4, 5, 6, 7, 8, and 9 if repetition of digits is not allowed?

Q10: In how many ways can you arrange 5 different books on a shelf if one particular book must always be in the middle?

### Probability with Combinations 1

1. **Select Class Presiedent**:
    Nia is of the students in the class. Every month, Nia's teacher randomly selects students from their class to act as class president, vice president, secretary, and treasurer. No one student can hold two positions.  In a given month, what is the probability that Nia is chosen as president?

        Total number of ways to permutate 4 students out n
        P(n,4)= n!/(n-4)!

        Total number ways to select the rest of 4 members if Nia is president
            P(n-1,3)=(n-1)!/(n-1-3)!

        the probability that Nia is chosen as president:

            P(n-1,3)/P(n,4)=1/n

2. **Select 4 cards with colors**
    What is the probability of selecting 4 cards with exactly 2 black cards and 2 red cards from a deck of 12 cards with 3 of each suit (3 diamonds, 3 spades, 3 black hearts, 3 red hearts), 

        we need to consider the following:
        
        There are 6 black cards (3 spades + 3 black hearts).
        There are 6 red cards (3 diamonds + 3 red hearts).
            
        Probability = C(6,3)*C(6,3)C(12,4) 
3. **P(3/8H) get 3 heads with 8 throws of a coin**
   
    total number of possible outcomes of 8 tthrowing:$2^2=512$ 
    total number of possible outcomes of 8 with 3 heads: $C(8,3)$
    so answer is $P(3/8 heads)=C(8,3)/2^8$
    
3. A card game using total 36 cards: 1-9 from each suits. A hand is a collection of 9 cards. What is is the probability of getting all four 1s in a hands
   P(a hands with all 4 1s)=C(36-4,5)/C(36,9)



### Probability with Combinations 2

1. **Coin Toss Combination**: You toss three coins. What is the probability that at least two of them will land heads up?
2. **Dice Roll Permutation**: You roll two distinct six-sided dice. What is the probability that the numbers rolled will sum to 8?
3. **Card Selection Combination**: From a standard deck of 52 cards, what is the probability of drawing 2 queens in a row without replacement?
4. **Color Balls Combination**: In a bag containing 5 red, 4 blue, and 3 green balls, what is the probability of drawing one ball of each color if you draw three balls in total?
5. **Class Election Permutation**: In your class, there are 4 candidates running for president and 3 running for vice-president. What is the probability that a specific student will be president and another specific student will be vice-president?
6. **Lunch Group Combination**: Your lunch group consists of 8 friends. If you randomly select 3 friends to buy lunch today, what is the probability that your best friend will be one of them?
7. **Locker Combination Permutation**: There are 5 different stickers, and you want to decorate your locker by placing 3 of them in a row. What is the probability that a specific sticker will be in the middle?
8. **Library Books Combination**: If there are 10 novels and 5 biographies in a library shelf, what is the probability of randomly picking 2 novels in succession without replacement?
9. **Seat Arrangement Permutation**: In a row of 6 seats, what is the probability that two specific friends, Ana and Bob, will sit next to each other?
10. **Sports Team Combination**: A sports team has 11 players, including 2 goalkeepers. If the coach randomly selects 1 goalkeeper to start the match, what is the probability that your favorite goalkeeper will start?



### Answers with Logic Steps

#### 1. Coin Toss Combination
- **Total Outcomes**: Each coin can land in two ways (Heads or Tails), so for three coins: $2^3 = 8$.
- **Favorable Outcomes**: Combinations where at least two heads appear: HHx, HxH, xHH, HHH (where x can be H or T).
- **Calculation**: 4 out of 8 outcomes have at least two heads.
- **Probability**: $\frac{4}{8} = \frac{1}{2}$.

#### 2. Dice Roll Permutation
- **Total Outcomes**: Each die has 6 sides, so total outcomes when two dice are rolled: $6 \times 6 = 36$.
- **Favorable Outcomes**: Combinations that sum to 8: (2,6), (3,5), (4,4), (5,3), (6,2).
- **Probability**: $\frac{5}{36}$.

#### 3. Card Selection Combination
- **Total Outcomes**: The first draw has 52 possibilities, and the second draw has 51 (without replacement).
- **Favorable Outcomes**: First queen (4 ways), Second queen (3 ways).
- **Probability**: $\frac{4}{52} \times \frac{3}{51} = \frac{1}{221}$.

#### 4. Color Balls Combination
- **Total Outcomes**: Choose 3 balls from 12 ($ \binom{12}{3} $).
- **Favorable Outcomes**: One ball of each color ($5 \times 4 \times 3$ ways).
- **Probability**: $\frac{5 \times 4 \times 3}{\binom{12}{3}}$.

#### 5. Class Election Permutation
- **Total Outcomes**: Each of the 4 could be president and any of the remaining 3 could be vice-president ($4 \times 3 = 12$).
- **Favorable Outcome**: Specific pair selected.
- **Probability**: $\frac{1}{12}$.

#### 6. Lunch Group Combination
- **Total Outcomes**: Choose 3 friends out of 8 ($ \binom{8}{3} $).
- **Favorable Outcomes**: Best friend selected plus 2 out of the remaining 7 ($ \binom{7}{2} $).
- **Probability**: $\frac{\binom{7}{2}}{\binom{8}{3}}$.

#### 7. Locker Combination Permutation
- **Total Outcomes**: Arrange 3 stickers out of 5 ($5 \times 4 \times 3 = 60

$ ways).
- **Favorable Outcomes**: Specific sticker in the middle (4 choices for first, 3 for third position).
- **Probability**: $\frac{4 \times 3}{60} = \frac{1}{5}$.

#### 8. Library Books Combination
- **Total Outcomes**: Choose 2 books out of 15 without replacement ($\binom{15}{2}$).
- **Favorable Outcomes**: Choose 2 novels out of 10 ($\binom{10}{2}$).
- **Probability**: $\frac{\binom{10}{2}}{\binom{15}{2}}$.

#### 9. Seat Arrangement Permutation
- **Total Outcomes**: Arrange 6 people in a row ($6!$).
- **Favorable Outcomes**: Fix Ana and Bob as a pair, then arrange ($2 \times 5!$ because Ana and Bob can switch places).
- **Probability**: $\frac{2 \times 5!}{6!} = \frac{1}{3}$.

#### 10. Sports Team Combination
- **Total Outcomes**: Select 1 out of 2 goalkeepers.
- **Favorable Outcomes**: Your favorite goalkeeper is chosen.
- **Probability**: $\frac{1}{2}$.

These questions and answers provide a comprehensive overview of how to apply combinations and permutations to probability problems, reinforcing the understanding of these mathematical concepts.


### 4. Binomial Probability  

$$P(n,k)=C(n,k)*p^k*(1-p)^{n-k}$$

1. If a person has 80% successful rate of shoting a basket ball
   1. what is the probability of he get 3 success shot out of 5 shots $$P(3/5:success)=0.8^3*0.2^2*C(8,3)$$
   2. the probability of he get at least 3 success shot out of 5 shots $$P(3/5:success)+P(4/5:success)+P(3/5:success)$$