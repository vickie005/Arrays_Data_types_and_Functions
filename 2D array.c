// C arrays - 2D arrays
#include <stdio.h>
int main(){
	int i,j;
	int marks[2][3] ={{40,50,60}, {80,30,92}};
	for(i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("marks [%d] [%d] =%d/n", i,j, marks [i][j]);
		}
}
return 0;
}