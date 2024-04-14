let nst=5;
let nsp=0;
for(let row=1;row<=5;row++){
    for(let st=1;st<=nst;st++){
        process.stdout.write("*");
    }
    for(let sp=1;sp<=nsp;sp++){
        process.stdout.write(" ");
    }console.log();

    nst=nst-1;
    nsp=nsp+1;

}
let nst1=1;
let nsp1=4;
for(let row=1;row<=5;row++){
    for(let sp=1;sp<=nsp1;sp++){
        process.stdout.write(" ");
    }

    for(let st=1;st<=nst1;st++){
        process.stdout.write("*");
    } console.log();

    nst1=nst1+1;
    nsp1=nsp1-1;
}



let nsp2=2;
let nst2=1;

for(let row=1;row<=5;row++){
    for(let sp=1;sp<=nsp2;sp++){
        process.stdout.write("  ")
    }
    for(let st=1;st<=nst2;st++){
        process.stdout.write("* ")
    }
    console.log();
    if(row<3){
        nsp2=nsp2-1;
        nst2=nst2+2;
    }  else{
        nsp2=nsp2+1;
        nst2=nst2-2;
    }
}

let nsp3=0;
let nst3=5;
for(let row=1;row<=5;row++){
    for(let sp=1;sp<=nsp3;sp++){
        process.stdout.write("  ");
    }
    for(let st=1;st<=nst3;st++){
        process.stdout.write("* ");
    }
    console.log();

    if(row<3){
        nsp3=nsp3+1;
        nst3=nst3-2;
    }else{
        nst3=nst3+2;
        nsp3=nsp3-1;
    }
}
