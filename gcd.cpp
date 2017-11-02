llu gcd(llu a,llu b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}


//Euclidean GCD


int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}
