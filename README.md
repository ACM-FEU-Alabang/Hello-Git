# Hello Git!
Welcome to this introductory project. This is a practical application of Git to help you get familiarized with the commands, as well as get familiar with the nuances of online collaboration.
## Learning Outcomes:
In this requirement, you are expected to learn and understand the following:
* The simplicity and usability of Git & GitHub for online collaboration
* Online collaboration at a student perspective
* The importance of git in the industry

## Requirements:
* Use [Atom](https://atom.io/) as your primary text editor.
* Download and install [Git](https://git-scm.com/)
* Download and install the C/C++ compiler for Windows [MinGW](http://mingw-w64.org/doku.php)
* Download and install the `gpp-compiler` from the [atom package store](https://atom.io/packages/gpp-compiler)
* Use C or C++ for these tasks.

*Add MinGW to your environments variable. If you are unsure of what to do, follow this full guide on installing Atom and MinGW [here.](https://www.youtube.com/watch?v=zaokK25DITo)*

## Your Task:
There are **four** tasks for your group to complete. They are as follows:
* Caesar Cipher with a key
* Caesar Cipher with substitution
* The Change Problem
* Credit Card Checksum

These are taken from Harvard University's CS50.

------
### Caesar Cipher
The Caesar Cipher is a simple encryption method. It has two primary methods of encryption; **Shifting the placement of the alphabet by a number called a *key***  and **Replacement of the 26 alphabets with a *substitution cipher***
#### Caesar with a Key
Harvard's CS50 reads


>More formally, Caesar's algorithm (i.e., cipher) encrypts messages by “rotating” each letter by k positions. More formally, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as

>ci = (pi + k) % 26

>Think of A (or a) as 0, B (or b) as 1, …, H (or h) as 7, I (or i) as 8, …, and Z (or z) as 25. Suppose that Caesar just wants to say Hi to someone confidentially using, this time, a key, k, of 3. And so his plaintext, p, is Hi, in which case his plaintext’s first character, p0, is H (aka 7), and his plaintext's second character, p1, is i (aka 8). His ciphertext's first character, c0, is thus K, and his ciphertext's second character, c1, is thus L. 

In more precise terms, when a user enter's a word or phrase, the letters get rotated by adding to the key. For example, the word HELLO is shifted with a key of 1, the output is:

| Plaintext   | H            | E              | L             | L              | O             |
| :------------: | :------------: | :------------: | :------------: | :------------: | :------------: |
| + Key       |  1 | 1  | 1  | 1  | 1  |
| = Cipher  |  I |  F | M  | M  | P  |

Please take note of this specification:
>Do not assume that k will be less than or equal to `26`. if k is `27`, `A` should not become `[` even though `[` is 27 positions away from `A` in ASCII, per [asciichart.com](http://www.asciichart.com/); `A` should become `B`, since `B` is 27 positions away from `A`, provided you wrap around from `Z` to `A`.

The "Wrapping" indicated in this constraint can be resolved using the formula `ci = (pi + k) % 26`.

Your program will accept an input phrase or word and a key. The output should be the encrypted text. **Maintain the casing of the letters and their punctuations**.
````
Plaintext: Hello World 3
Ciphertext: Khoor Zruog 
````

**For more information on Caesar's Cipher with a key, as well as a video explaining the problem, view the full problem set [here](https://cs50.harvard.edu/x/2020/psets/2/caesar/)**.

#### Caesar with Substitution
In the case of substitution, instead of the key being a number, it is instead a 26-letter input. CS50 reads:
>A key, for example, might be the string `NQXPOMAFTRHLZGECYJIUWSKDVB`. This 26-character key means that `A` (the first letter of the alphabet) should be converted into `N` (the first character of the key), `B` (the second letter of the alphabet) should be converted into `Q` (the second character of the key), and so forth.

The program then will accept an input phrase or word and a key. The output should be the encrypted text. **Maintain the casing of the letters and their punctuations.**
````
Plaintext: Hello, World!
Key: VCHPRZGJNTLSKFBDQWAXEUYMOI
Ciphertext: Uryyb, Jbeyq!
````
**For more information on Caesar's Cipher with Substitution, as well as a video explaining the problem, view the full problem set [here](https://cs50.harvard.edu/x/2020/psets/2/substitution/)**.

-----
### The Change Problem
The Change problem is a simple greedy algorithm designed to give you change with the least amount of coins; as CS50 explains:
>For instance, if some customer is owed 41¢, the biggest first (i.e., best immediate, or local) bite that can be taken is 25¢. (That bite is "best" inasmuch as it gets us closer to 0¢ faster than any other coin would.). Needless to say, another 25¢ bite would be too big, and so our greedy cashier would move on to a bite of size 10¢, leaving him or her with a 6¢ problem. At that point, greed calls for one 5¢ bite followed by one 1¢ bite, at which point the problem is solved. The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.

Assume the coins at your disposal are American cents: 25¢, 10¢, 5¢ and 1¢ coins and that you have an infinite supply. If the user enters a non-positive float or a word, reprompt until the input is a float.

Your expected input should be a floating point value. The output should be the amount of coins that should be given based on the greedy algorithm:
````
change owed: 0.41
coins: 4
````

**For more information on the Change Problem, as well as a video explaining the problem, view the full problem set [here](https://cs50.harvard.edu/x/2020/psets/1/cash/)**.

----
### Credit Card Checksum
In this task, you are to create your own implementation of Luhn's Algorithm. CS50 reads that:
> most cards use an algorithm invented by Hans Peter Luhn of IBM. According to Luhn's algorithm, you can determine if a credit card number is (syntactically) valid as follows:


>1. Multiply every other digit by 2, starting with the number's second-to-last digit, and then add those products'  digits together.
2. Add the sum to the sum of the digits that weren't multiplied by 2.
3. If the total's last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

>For the sake of discussion, let's first enbolden every other digit, starting with the number's second-to-last digit:

>**4**0**0**3**6**0**0**0**0**0**0**0**0**0**1**4

>Okay, let's multiply each of the underlined digits by 2:

>1•2 + 0•2 + 0•2 + 0•2 + 0•2 + 6•2 + 0•2 + 4•2

>That gives us:

>2 + 0 + 0 + 0 + 0 + 12 + 0 + 8

>Now let's add those products' digits (i.e., not the products themselves) together:

>2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13

>Now let's add that sum (13) to the sum of the digits that weren't multiplied by 2 (starting from the end):

>13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20

>Yup, the last digit in that sum (20) is a 0, so David's card is legit!

To test your checksum algorithm, PayPal provides developer card numbers. Click [here.](https://developer.paypal.com/docs/payflow/payflow-pro/payflow-pro-testing/)

It is ***highly recommended*** for you to watch the video explaining the problem [here](https://www.youtube.com/watch?v=dF7wNjsRBjI).

**For more information on the Credit Card Checksum, as well as a video explaining the problem, view the full problem set [here](https://cs50.harvard.edu/x/2020/psets/1/credit/)**.

### Good luck!
----

## Acknowledgements:
This project was designed by then ACM FEUA Secretary Junel Capawing with problem sets taken from Harvard University's CS50. All rights reserved to their respective owners.

If these projects and problem sets interest you, watch CS50's introductory video [here](https://www.youtube.com/watch?v=3oFAJtFE8YU) and explore CS50 itself [here](https://cs50.harvard.edu/x/2021/).

If you want to implement these problem sets under your course, you are free to do so under the CC BY-NC-SA 4.0 license. The terms of the license in simple terms can be viewed [here](https://cs50.harvard.edu/x/2020/license/)

This short git project itself is under the MIT License. You are free to adapt, transform and reuse the material in your own classes provided you credit the proper owners.


## A few remarks:
When I started CS50, I was taken aback at how advanced the problems were. However in retrospect, these problems here are supposed to have been the simplest problems of Computer Science, and for Harvard, these were just daily assignments. I took it upon myself to continue investigating on what else have I been missing out and learned that CS50's course, along with Git and GitHub were the most needed in order to us to be even slightly prepared for the workplace. CS50 in my opinion provides CS students a strong foundational basis for Computer Science, delving into everything at a high level, understandable for a beginner whilst giving out challenging problem sets that allows us to explore and approach the problem at your own pace and angle. I thoroughly recommend this course for its strong foundational basis, as well as Git and GitHub as places to explore and to get ideas from. 

I hope that you find this project useful. 

Regards, 

Junel Capawing.

## Good luck and Godspeed.
