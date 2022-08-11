int n ;
    cin >> n ;
    
    string s;
    cin >> s ;
    
    bool length = false ;
    bool upr = false ;
    bool lwr = false ;
    bool digit = false ;
    bool special = false ;
    
    if(s.size() >= 7){
        length = true ;
    }
    
    int count = 0 ;
    for(auto x:s){
        if(x >= 'A' &&(x <= 'Z'){
            upr = true ;
        }else if(x >= 'a' &&(x <= 'z'){
            lwr = true ;
        }else if(x >= '0' &&(x<= '9'){
            digit = true ;
        }else if(x == '#' ||(x == '@' ||(x == '*' ||(x == '&'){
            special = true ;
        }
    }
    
    if(!upr){
        s += "Y" ;
    }
    if(!lwr){
        s += "b" ;
    }
    if(!digit){
        s += "5" ;
    }
    if(!special){
        s += "#" ;
    }
    
    int i = 0 ;
    while(s.size() < 7){
        s += "0" ;
    }
    cout << s << endl ;