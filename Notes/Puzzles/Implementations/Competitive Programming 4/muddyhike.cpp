    in>>a>>b;
    avv=VV(a,V(b));
    target=a*b+1;
    graph=vector<vector<edge>>(a*b+2);
    num=a*b+2;
    edge aedge;
    for(c=0;c<a;c++){
        aedge.w=0;
        aedge.to=c*b+1;
        graph[0].add(aedge);
        for(d=0;d<b;d++){
            in>>avv[c][d];
            if(c>0){
                aedge.w=max(avv[c][d],avv[c-1][d]);
                aedge.to=(c-1)*b+d+1;
                graph[c*b+d+1].add(aedge);
                aedge.to=c*b+d+1;
                graph[(c-1)*b+d+1].add(aedge);
            }
            if(d>0){
                aedge.w=max(avv[c][d],avv[c][d-1]);;
                aedge.to=c*b+d;
                graph[c*b+d+1].add(aedge);
                aedge.to=c*b+d+1;
                graph[c*b+d].add(aedge);
            }
        }
        aedge.w=0;
        aedge.to=a*b+1;
        graph[c*b+b].add(aedge);
    }
    MST();
    out<<output<<nl;