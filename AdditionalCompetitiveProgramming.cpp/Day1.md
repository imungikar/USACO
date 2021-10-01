**Day 1 Stuff**

You have main function and some libraries to call

For Loops :

Of Syntax for(int i=0; i<5; i++){
    where int i = 0 is the index variable
    i<5 defines a condition
    i++ adds one
}


Arrays are like int x[4] = {1,2,3,4}
If you need to store N values in an array store it as int arr[50]; if n is 50 as the upper limit or int arr[N] on g++

To read N inputs:
int arr[50];
int N;
cin >> N;
for(int i=0; i<N; i++){
    cin>>arr[i];
    //because i is changing all the time
}