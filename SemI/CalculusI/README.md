<div align="center">
  <h1>Calculus I</h1>
  <img src="https://miro.medium.com/v2/resize:fit:720/format:webp/1*L76A5gL6176UbMgn7q4Ybg.jpeg" alt="calculus"/>
</div>

# Sumary 

* [Intuitive Definition of a Limit](https://github.com/gabrielfelipeassuncaodesouza/Computer-Science-Unifap/tree/main/SemI/CalculusI#intuitive-definition-of-a-limit)
* [One-Sided Limits](https://github.com/gabrielfelipeassuncaodesouza/Computer-Science-Unifap/tree/main/SemI/CalculusI/README.md#one-sided-limits)
* [Infinite limits](https://github.com/gabrielfelipeassuncaodesouza/Computer-Science-Unifap/tree/main/SemI/CalculusI/README.md#infinite-limits-vertical-asymptote)
* [Limit Laws](https://github.com/gabrielfelipeassuncaodesouza/Computer-Science-Unifap/tree/main/SemI/CalculusI/README.md#limits-laws)
* [Squeeze theorem](https://github.com/gabrielfelipeassuncaodesouza/Computer-Science-Unifap/tree/main/SemI/CalculusI/README.md#squeeze-theorem)

# Intuitive Definition of a Limit 

Suppose $f(x)$ is defined when x is near the number $a$. (This means that $f$ is defined on some open interval that contains $a$, except possibly at $a$ itself.) Then we write: 

$$\lim\limits_{x \to a} f(x) = L$$

and say “the limit of $f(x)$, as $x$ approaches $a$, equals $L$” 

if we can make the values of $f(x)$ arbitrarily close to $L$ (as close to $L$ as we like) by restricting $x$ to be sufficiently close to $a$ (on either side of $a$) but not equal to $a$.

# One-Sided Limits

Definition of One-Sided Limits:

We write $$\lim\limits_{x \to a^{-}} f(x) = L$$ and say the left-hand limit of $f(x)$ as $x$ approaches $a$ [or the limit of $f(x)$ as  x approaches $a$ from the left] is equal to $L$ if we can make the values of $f(x)$  arbitrarily close to $L$ by taking $x$ to be sufficiently close to a with $x$ less than $a$.

Similarly, if we require that $x$ be greater than $a$, we get “the right-hand limit of $f(x)$ as $x$ approaches $a$ is equal to $L$” and we write:

$$\lim\limits_{x \to a^{+}} f(x) = L$$ 

Thus the notation $x \to a^{+}$ means that we consider only $x$ greater than $a$. 

# Infinite Limits (vertical asymptote)

Let $f$ be a function defined on both sides of $a$, except possibly at $a$ itself. Then 

$$\lim\limits_{x \to a} f(x) = \infty$$

means that the values of $f(x)$ can be made arbitrarily large (as large as we please) by taking $x$ sufficiently close to $a$, but not equal to $a$

Likewise, we have 

$$\lim\limits_{x \to a} f(x) = -\infty$$ 

means that the values of $f(x)$ can be made arbitrarily large negative by taking $x$ sufficiently close to $a$, but not equal to $a$.

# Limits Laws

Suppose that $c$ is a constant and the limits $$\lim\limits_{x \to a} f(x)  \quad  and  \quad  \lim\limits_{x \to a} f(x)$$ exist. Then

$$\lim\limits_{x \to a} [f(x) + g(x)] = \lim\limits_{x \to a} f(x) + \lim\limits_{x \to a} g(x)$$

$$\lim\limits_{x \to a} [f(x) - g(x)] = \lim\limits_{x \to a} f(x) - \lim\limits_{x \to a} g(x)$$

$$\lim\limits_{x \to a} [cf(x)] = c\lim\limits_{x \to a} f(x)$$

$$\lim\limits_{x \to a} [f(x)g(x)] = \lim\limits_{x \to a} f(x) * \lim\limits_{x \to a} g(x)$$

$$\lim\limits_{x \to a} \frac{f(x)}{g(x)} = \frac{\lim\limits_{x \to a} f(x)}{\lim\limits_{x \to a} g(x)} \quad if \lim\limits_{x \to a} g(x) \neq 0$$

$$\lim\limits_{x \to a} [f(x)]^{n} = [\lim\limits_{x \to a} f(x)]^{n}   \quad  where\quad n\quad is\quad a\quad positive\quad integer$$

$$\lim\limits_{x \to a} c = c$$

$$\lim\limits_{x \to a} x = a$$

These five laws can be stated verbally as follows: 

1. The limit of a sum is the sum of the limits. 
2. The limit of a difference is the difference of the limits. 
3. The limit of a constant times a function is the constant times the limit of the function. 
4. The limit of a product is the product of the limits. 
5. The limit of a quotient is the quotient of the limits (provided that the limit of the denominator is not 0).

# Squeeze theorem

In calculus, the squeeze theorem (also known as the sandwich theorem) is a theorem regarding the limit of a function that is trapped between two other functions.



Theorem —  Let $I$ be an interval containing the point $a$. Let $g$, $f$, and $h$ be functions defined on $I$, except possibly at $a$ itself. Suppose that for every $x$ in I not equal to $a$, we have
$$g(x) ≤ f(x) ≤ h(x)$$
and also suppose that
$$\lim\limits_{x \to a} g(x) = \lim\limits_{x \to a} h(x) = L$$
Then
$$\lim\limits_{x \to a} f(x) = L$$
