//CreateFile
void NewFile() 
{
    printf("Enter file name(Max 20 characters): ");
    gets(FileName);
    //scanf(" %s",FileName); 
    fp = fopen("FileName","w"); 
    //fscanf(fp,Beginning()); 
    fclose(fp);  
}