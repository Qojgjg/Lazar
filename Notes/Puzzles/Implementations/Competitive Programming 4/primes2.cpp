    in>>a;
    PSL apsl;
    for(b=0;b<a;b++){
        in>>as;
        c=0;
        d=0;
        apsl=convert(as,2,10);
        if(apsl.first!="-1"){
            d++;
            if(isprime(apsl.second))c++;
        }
        apsl=convert(as,8,10);
        if(apsl.first!="-1"){
            d++;
            if(isprime(apsl.second))c++;
        }
        apsl=convert(as,10,10);
        if(apsl.first!="-1"){
            d++;
            if(isprime(apsl.second))c++;
        }
        apsl=convert(as,16,10);
        if(apsl.first!="-1"){
            d++;
            if(isprime(apsl.second))c++;
        }
        e=gcd(c,d);
        c/=e;
        d/=e;
        out<<c<<"/"<<d<<nl;
    }