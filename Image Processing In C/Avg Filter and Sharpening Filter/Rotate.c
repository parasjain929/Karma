#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fIn = fopen("lena.bmp","r");					//Input File name
	FILE *fOut = fopen("lena_rotate.bmp","w+");		    	//Output File name

	int i,j,choice;int temp,x,y;
	unsigned char byte[54],colorTable[1024];

	if(fIn==NULL)											// check if the input file has not been opened succesfully.
	{
		printf("File does not exist.\n");
	}

	for(i=0;i<54;i++)										//read the 54 byte header from fIn
	{
		byte[i] = getc(fIn);
	}

	fwrite(byte,sizeof(unsigned char),54,fOut);				//write the header back

	// extract image height, width and bitDepth from imageHeader
	int height = *(int*)&byte[18];
	int width = *(int*)&byte[22];
	int bitDepth = *(int*)&byte[28];

	printf("width: %d\n",width);
	printf("height: %d\n",height );

	int size = height*width;								//calculate image size

	if(bitDepth <= 8)										//if ColorTable present, extract it.
	{
		fread(colorTable,sizeof(unsigned char),1024,fIn);
		fwrite(colorTable,sizeof(unsigned char),1024,fOut);
	}

	unsigned char buffer[width][height];					//to store the image data
	unsigned char out_buffer[width][height];
        unsigned char dif[width][height];

	fread(buffer,sizeof(unsigned char),size,fIn);			//read the image data

	printf("Enter your choice :\n");
	printf("1. Rotate right\n");
	printf("2. Rotate left\n");
	printf("3. Rotate 180\n");
	printf("4. Average Filter\n");
        printf("5. Sharpening Filter\n");

	scanf("%d",&choice);

	switch(choice)												//to rotate image in 3 direction
	{
		case 1:
			for(i=0;i<width;i++)								//to rotate right
			{
				for(j=0;j<height;j++)
				{
					out_buffer[j][height-1-i]=buffer[i][j];
				}
			}
			break;
		case 2:
			for(i=0;i<width;i++)								//to rotate left
			{
				for(j=0;j<height;j++)
				{
					out_buffer[j][i]=buffer[i][j];
				}
			}
			break;
		case 3:
			for(i=0;i<width;i++)								//to rotate 180 degree
			{
				for(j=0;j<height;j++)
				{
					out_buffer[width-i][j]=buffer[i][j];
				}
			}
			break;
		case 4:	
			for(i=1;i<width-1;i++)
			{
				for(j=1;j<height-1;j++)
				{
                                        temp=0;
					for(x=-1;x<=1;x++)
					{
						for(y=-1;y<=1;y++)
						temp+=buffer[i+x][j+y];
					}
                                out_buffer[width-i][j]=temp/9;				
				}
			}
			break;
            case 5:	
			for(i=1;i<width-1;i++)
			{
				for(j=1;j<height-1;j++)
				{
                                        temp=0;
					for(x=-1;x<=1;x++)
					{
						for(y=-1;y<=1;y++)
						temp+=buffer[i+x][j+y];
					}
                                out_buffer[width-i][j]=temp/9;
                                dif[width-i][j]=abs(out_buffer[width-i][j]-buffer[i][j]);
                               // out_buffer[width-i][j]=dif[width-i][j]+buffer[i][j];				
				}
			}
			for(i=1;i<width-1;i++)
			{
				for(j=1;j<height-1;j++)
				{
                    out_buffer[width-i][j]=dif[width-i][j]+buffer[i][j];
				}
			}
			break;
                        
		    default:
			break;
        
	}

	fwrite(out_buffer,sizeof(unsigned char),size,fOut);		//write back to the output image

	fclose(fIn);
	fclose(fOut);

	return 0;
}
