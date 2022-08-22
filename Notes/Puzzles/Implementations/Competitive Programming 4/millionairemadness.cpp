    in>>a>>b;
    num=a*b;
    bottomleft=a*b-1;
    avv=VV(a,V(b));
    graph=vector<vector<edge>>(a*b);
    edge aedge;
    for(c=0;c<a;c++){
        for(d=0;d<b;d++){
            in>>avv[c][d];
            if(c>0){
                aedge.w=max(0,avv[c-1][d]-avv[c][d]);
                aedge.to=(c-1)*b+d;
                graph[c*b+d].add(aedge);
                aedge.w=max(0,avv[c][d]-avv[c-1][d]);
                aedge.to=c*b+d;
                graph[(c-1)*b+d].add(aedge);
            }
            if(d>0){
                aedge.w=max(0,avv[c][d-1]-avv[c][d]);
                aedge.to=c*b+d-1;
                graph[c*b+d].add(aedge);
                aedge.w=max(0,avv[c][d]-avv[c][d-1]);
                aedge.to=c*b+d;
                graph[c*b+d-1].add(aedge);
            }
        }
    }
    MST();
    out<<output<<nl;