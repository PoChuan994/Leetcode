bool isPalindrome(int x) {

    if(x<0){
        return false;
    }else if(x==0){
        return true;
    }else{
        int length = 0;
        int tmp = x;

        while(tmp > 0){
            int a = tmp % 10;
            tmp = (tmp - a) / 10;
            length += 1;
        }

        int round = length / 2;
        int input[length];
        tmp = x;

        // int i = length - 1; i>=0; i--
        for(int i=0; i<length; i++){
            int a = tmp % 10;
            input[i] = a;
            tmp = (tmp - a) / 10;
        }

        for(int i=0; i<round; i++){
            if(input[i] != input[length-1-i]){
                return false;
            }
        }
        return true;
    }
}
