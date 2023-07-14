 To make lcm (c, m) = l c at least have a prime factor in l
 not in m and l index in the index greater than m in the index in l

            c = l / m;

Now c contains the prime factor in l that is not in m,
 and the exponent in l is greater than the prime factor in m.

Then c now needs to multiply the public prime factor of c and m
 to take the index in m

            While((d = gcd(c, m)) != 1)

gcd(c,m) takes a small exponential product of c,m common prime factors

           {
                c = c * d, m = m / d;
                d = gcd(c, m);
            }
            Printf("%lld\n", c);
