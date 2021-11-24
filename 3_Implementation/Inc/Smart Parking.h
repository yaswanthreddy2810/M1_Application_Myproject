
typedef vnum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    
}user;
/**
 * @brief structure for storing of data
 * 
 */
typedef struct info
{
    int parkinfo[4][10] ;  
    int vehcount ;  
    int carcount ;	
    int scootercount ;  
    char user[100];
    char password[15];
    int scooter;
    int car;
    struct info *nt;
} info;


user add(info *park, int parkinfo[4][10] ,int carcount ,	
    int scootercount ,  
    char user[100],
    char password[15],
    int scooter,
    int car);

info *newadd(info *park, int parkinfo[4][10] ,int carcount ,	
    int scootercount ,  
    char user[100],
    char password[15],
    int scooter,
    int car);

int validuser(char *user);

int validpass(char *password);

int validadd(char *park);

int validvehical(char *vehicler);

user update(info *,int,int,int);

user search_by_empid(info *, int , info *, int *);


/**
 * @brief to check the entered date
 * 
 * @return int 
 */
int checkDate(int, int , int );
/**
 * @brief to check the BU whether it is entered correctly or not
 * 
 * @return int 
 */
int checkBU(char *);
/**
 * @brief to check the role whether it is entered correctly or not
 * 
 * @return int 
 */
int checkRole(char *);

void searchJoiningDate(info *, int, int, int);

void searchRole(info *, char *);

void searchBU(info *, char *);


int newatt(int );

int newlea(int );


user display(info *park);



#endif
