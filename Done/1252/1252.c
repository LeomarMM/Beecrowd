#include<stdio.h>
#include<stdlib.h>
int M=-1;
typedef struct 
{
  int *vector;
  int vectorSize;
  int listSize;
} List;
List* newList()
{
	List* list = malloc(sizeof(List));
	if(list == NULL) return NULL;
	list->vectorSize=10;
	list->vector = malloc(sizeof(int) * list->vectorSize);
	if(list->vector == NULL)
	{
		free(list);
		return NULL;
	}
	list->listSize=0;
	return list;
}
void insertElement(List* list, int value, int index)
{
    int i;
	if(list == NULL) return;
    if(index < 0) index = 0;
    if(index > list->listSize) index = list->listSize;
    if(list->listSize == list->vectorSize)
    {
        list->vectorSize *= 2;
        int *V2 = malloc(sizeof(int)*list->vectorSize);
        if(V2 == NULL) return;
        for(i = 0; i<list->listSize; i++)
        {
            V2[i] = list->vector[i];
        }   
        free(list->vector);
        list->vector = V2;
    }
    for(i = list->listSize; i>index; i--)
    {
        list->vector[i] = list->vector[i-1];        
    }
    list->vector[index] = value;
    list->listSize++;
}
void deleteList(List* list)
{
	if(list == NULL) return;
	free(list->vector);
	free(list);
}
void merge(int *vector, int *s1, int size1, int *s2, int size2) 
{
    int i, j, k;
    i = 0;
    j = 0;
    for (k = 0; k < (size1+size2); k++) 
    {
        int O1 = s1[i]%2, O2 = s2[j]%2;
        if (i >= size1) 
        {
            vector[k] = s2[j++];
        }
        else if (j >= size2) 
        {
            vector[k] = s1[i++];
        }
        else if (s1[i]%M < s2[j]%M) 
        {
            vector[k] = s1[i++];
        } 
        else if (s1[i]%M == s2[j]%M && ((O1 && !O2) || (O1 && O2 && s1[i] > s2[j]) || (!O1 && !O2 && s1[i] < s2[j]))
            ) 
        {
            vector[k] = s1[i++];
        } 
        else 
        {
            vector[k] = s2[j++];
        }
    }
}
void mergeSort(List *list) 
{
    int n;  
    for (n = 1; n < list->listSize; n *= 2) 
    {
        int b1[n * sizeof(int)], b2[n * sizeof(int)], i;
        for (i = 0; i < list->listSize; i += 2 * n) 
        {
            int size2 = list->listSize-(i+n);
            size2 = (size2 < n)?size2:n;
            if (size2 > 0) 
            {
                int j;
                for (j = 0; j < n; j++) b1[j] = list->vector[i+j];
                for (j = 0; j < size2; j++) b2[j] = list->vector[i+n+j];
                merge(list->vector+i, b1, n, b2, size2);
            }
        }
      }
}
void main()
{
    int N=-1;
    int i = 0;
    while(1)
    {
        List *data = newList();
        scanf("%d %d", &N, &M);
        printf("%d %d\n", N, M);
        if(N == 0 && M == 0) break;
        for(i = 0; i < N; i++)
        {
            int value;
            scanf("%d", &value);
            insertElement(data, value, i);
        }
        mergeSort(data);
        for(i = 0; i < data->listSize; i++) printf("%d\n", data->vector[i]);
        deleteList(data);
    }
}