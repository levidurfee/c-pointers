#include <stdio.h>

/*
* Using multiple levels of indirection can provide flexibility
* in how code can be written.
*/

int movies(void) {
    char *titles[] = {"Hackers", "The Net", "Swordfish", "Antitrust"};
    char **levi_rating[4];
    char **imdb_rating[4];
    
    /* 0 meaning most fav */
    levi_rating[0] = &titles[0];
    levi_rating[1] = &titles[3];
    levi_rating[2] = &titles[1];
    levi_rating[3] = &titles[2];
    
    /* imdb is usually wrong */
    imdb_rating[0] = &titles[2];
    imdb_rating[1] = &titles[1];
    imdb_rating[2] = &titles[0];
    imdb_rating[3] = &titles[3];
    
    printf("Levi's #1 pick: %s\n", *levi_rating[0]);
    printf("Imdb's #1 pick: %s\n", *imdb_rating[0]);
    
    // change a title
    titles[0] = "Cinderella";
    titles[2] = "Harry Potter";
    
    printf("Levi's #1 pick: %s\n", *levi_rating[0]);
    printf("Imdb's #1 pick: %s\n", *imdb_rating[0]);
    return 1;
}

int indirection(void) {
    char *names[] = {"Levi", "Tadd", "John", "Megan", "Tom"};
    
    char **developers[3];
    char **designers[4];
    
    developers[0] = &names[0];
    developers[1] = &names[1];
    developers[2] = &names[2];
    
    designers[0] = &names[3];
    designers[1] = &names[4];
    
    printf("Developer: %s\n", *developers[0]);
    printf("Designer: %s\n", *designers[0]);
    
    designers[0] = &names[0];
    printf("Designer: %s\n", *designers[0]);
    
    /* 
    * I can easily change the name in the names array 
    * and it will change in the other arrays. If we 
    * were to use only arrays, this would be much harder
    */
    names[0] = "Levi Durfee";
    printf("Developer: %s\n", *developers[0]);
    printf("Designer: %s\n", *designers[0]);
    return 1;
}
