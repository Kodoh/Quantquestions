# Solution

To determine the minimum amount of time until every person in the hall becomes sick, let's analyze the infection spread process. We start with one sick person among 1000 people.

1. **Initial infection**: At minute 0, we have 1 sick person.
2. **First round of infection**: After 1 minute, the sick person can potentially infect 1 new person if they talk to a healthy person.

Let's denote:
- `t` as the number of minutes,
- `S(t)` as the number of sick people at time `t`.

Initially:
S(0) = 1


After 1 minute:
S(1) = 2


**Propagation model**:
Each minute, every sick person talks to one random person, potentially spreading the infection. Thus, if `S(t)` people are sick at time `t`, then these `S(t)` sick individuals can each infect one new healthy person in the next minute.

Assuming optimal infection spread:
S(t+1) = 2 * S(t)


This model follows exponential growth. At each minute, the number of sick people doubles. This continues until everyone is infected.

The number of sick people doubles every minute:
2^t = 1000

To solve for `t`:
We calculate `log2(1000)`:

Since `t` must be an integer, we round up to the nearest whole number:
t = 10
