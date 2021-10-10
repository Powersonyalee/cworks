

# include <stdio.h>

int main() {

	int a = 99;
	int b = 2;
	
	printf("%d\n", a + b); //101
	printf("%d\n", a - b); //97
	printf("%d\n", a * b); //198
	printf("%d\n", a / b); //49
	printf("%d\n", a % b); //1 나머지 


	// 1증가(후증가) ; 더 많이 쓴다
	
	printf("%d\n", a ++); // a= a+1 or a +=1 //이지만 여기선 99, 다음연산에서 100 나옴
	printf("%d\n", a ); // 100


	// 1증가(선증가)
	printf("%d\n", ++a); //a= a+1 ; 101
	printf("%d\n", a); //101


	// 1감소(후감소)

	printf("%d\n", a--); // 101
	printf("%d\n", a); // 100


	// 1감소(선감소)
	printf("%d\n", --a); //99
	printf("%d\n", a); //99


	// 복합대입 연산자

	a += 2; //a = a + 2;
	printf("%d\n", a); //101

	a -= 2; //a = a - 2;
	printf("%d\n", a);


	b *= 3; // b= b*3 = 6
	printf("%d\n", b);

	b /= 2; // b= b/2 =3
	printf("%d\n", b);



	return 0;

}