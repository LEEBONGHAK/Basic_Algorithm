#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
    확장 유클리드

    - ax + by = c에서 c의 값이 gcd(a, b)의 배수일 때만 정수해를 갖는다고 알려져있다.
    - 따라서 ax + by = c가 정수해를 갖는 c의 최솟값이 gcd(a,b)가 되는 것이다.
    - 확장 유클리드 알고리즘은 a, b의 최대 공약수와 ax + by = gcd(a,b)를 만족하는 x, y도 구하는 알고리즘

    참고

    - https://www.crocus.co.kr/1232 (참고한 코드)
    - https://www.crocus.co.kr/1231
    - https://ohgym.tistory.com/13
*/

struct INFO 
{
    int s;
    int t;
    int gcd;
};

int a, b, tmp, s1, s2, t1, t2, r1, r2, q;

struct INFO xGCD(int a, int b) {
    s1 = 1, s2 = 0;
    t1 = 0, t2 = 1;
    r1 = a, r2 = b;

    while (1)
    {
        q = r1 / r2;
        tmp = r1 % r2;
        r1 = r2;
        r2 = tmp;

        if (r2 == 0) break;

        tmp = s1 - s2 * q;
        s1 = s2;
        s2 = tmp;

        tmp = t1 - t2 * q;
        t1 = t2;
        t2 = tmp;
    }

    // return s, t, gcd
    struct INFO ret = { s2, t2, r1 };

    return ret;
}

int main()
{
    scanf("%d %d", &a, &b);
    if (b > a)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    struct INFO ret = xGCD(a, b);

    // a * s + b * t = gcd(a, b);
    printf("s : %d, t : %d, gcd : %d\n", ret.s, ret.t, ret.gcd);
    /*
        ex)
        input               output
        a = 3, b = 11       s = -1, t = 4, gcd = 1

        a = 14, b = 11      s = 4, t = -5, gcd = 1
    */

    /*
        곱셈에 대한 역원을 구할 경우

        - a의 역원 : s
        - b의 역원 : t
    */

    return 0;
}