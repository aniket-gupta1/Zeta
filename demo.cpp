//
// Created by aniket on 5/13/22.
//

#include <cstdio>
#include <iostream>
#include <vector>

void Single_var_opt(){
    printf("NOT IMPLEMENTED YET");
}

void Linear_Regression(){
    printf("NOT IMPLEMENTED YET");
}

void Neural_Net(){
    printf("NOT IMPLEMENTED YET");
}

void print_error(std::vector<std::string>& arg){
    printf("Please choose from the following demos and pass option number as argument: \n");

    for(int i=0; i<arg.size(); ++i)
        printf("%d: %s\n", i, arg[i].c_str());

    // Exit the program since there was an error
    exit(1);
}

int main(int argc, char **argv){
    int arg = 0;
    std::cout<<"This is working now also"<<std::endl;

    std::vector<std::string> available_demos{
            "Single variable optimisation",
            "Linear Regression",
            "Neural Network"
    };


    if (argc==1)
        print_error(available_demos);
    else
        arg = argv[1][0]-'0';

    if (arg==0)
        Single_var_opt();
    else if (arg==1)
        Linear_Regression();
    else if (arg==2)
        Neural_Net();
    else
        print_error(available_demos);


    return 0;
}