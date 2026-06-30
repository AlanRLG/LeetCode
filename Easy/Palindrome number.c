bool isPalindrome(int x) {

    long inv = 0;
    int z = 0;
    long xp=x;

    if(x < 0)
    return false;

    for(int i=0; x != 0; i++){
        z = (x % 10);
        inv = (inv * 10) + z;
        x = (x / 10);
    }
    if (inv == xp){
        return true;
    }else{
        return false;
    }
    
}