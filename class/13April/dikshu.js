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

let n = 6;

for (let i = 1; i <= n; i++) {
    // Printing stars and spaces
    for (let j = 0; j < i; j++) {
        if (i === n) {
            process.stdout.write('*');
        } else {
            if (j === 0 || j === i - 1) {
                process.stdout.write('*');
            } else {
                process.stdout.write(' ');
            }
        }
    }
    console.log();
}

//number traversal------first digit

let num=7846;
 
    
let nod=0;
let temp=num;

while(temp>0){
    
    temp=Math.floor(temp/10);
    nod++;
}
console.log(nod);

let div=Math.pow(10,nod-1);



while(div>0){
   let fd=Math.floor(num/div);
   console.log(fd);
   num=Math.floor(num%div);
   div=Math.floor(div/10);
   
}
