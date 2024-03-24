
void main()
{
    static int val=5;
if(val)
{
    printf("%2d",val--);
    main();

}
}