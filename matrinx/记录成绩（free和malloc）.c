//    double **score
//    score = (double**)malloc(sizeof(*score) * nStuNum);
//    for (i = 0; i < nStuNum; i++)
//        score[i] = (double*)malloc(sizeof(**score) * nCourseNum);
void output(double **score, int nsn, double *avg)
{
	int i;
	for(i=0;i<nsn;++i)
	printf("%d %.2f\n", i+1, avg[i]);
	free(avg);
	for(i=0;i<nsn;++i) free(score[i]);
	free(score);
} 
void average(double** score, int nsn, int ncn, double* avg)
{
	int i,j;
	for(i=0;i<nsn;++i)
	{
		double sum=0;
		for(j=0;j<ncn;++j)
		{
			sum+=score[i][j];
			
		}
		avg[i]=sum/ncn;
	
	}	
}
