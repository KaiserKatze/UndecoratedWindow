/ /   u n d e c o r a t e d . c p p :   �[IN�^(uz�^�veQ�S�p0 
 / /  
  
 # i n c l u d e   " s t d a f x . h "  
 # i n c l u d e   " u n d e c o r a t e d . h "  
  
 # d e f i n e   M A X _ L O A D S T R I N G   1 0 0  
  
 / /   hQ@\�Sϑ:    
 H I N S T A N C E   h I n s t ;                                                                 / /   S_MR�[�O 
 W C H A R   s z T i t l e [ M A X _ L O A D S T R I N G ] ;                                     / /   h��h�e,g 
 W C H A R   s z W i n d o w C l a s s [ M A X _ L O A D S T R I N G ] ;                         / /   ;N�z�S{|T 
  
 / /   dk�Nx!jWW-NS+T�v�Qpe�vMRT�Xf:    
 A T O M                                 M y R e g i s t e r C l a s s ( H I N S T A N C E   h I n s t a n c e ) ;  
 B O O L                                 I n i t I n s t a n c e ( H I N S T A N C E ,   i n t ) ;  
 L R E S U L T   C A L L B A C K         W n d P r o c ( H W N D ,   U I N T ,   W P A R A M ,   L P A R A M ) ;  
 I N T _ P T R   C A L L B A C K         A b o u t ( H W N D ,   U I N T ,   W P A R A M ,   L P A R A M ) ;  
  
 i n t   A P I E N T R Y   w W i n M a i n ( _ I n _   H I N S T A N C E   h I n s t a n c e ,  
                                           _ I n _ o p t _   H I N S T A N C E   h P r e v I n s t a n c e ,  
                                           _ I n _   L P W S T R         l p C m d L i n e ,  
                                           _ I n _   i n t               n C m d S h o w )  
 {  
         U N R E F E R E N C E D _ P A R A M E T E R ( h P r e v I n s t a n c e ) ;  
         U N R E F E R E N C E D _ P A R A M E T E R ( l p C m d L i n e ) ;  
  
         / /   T O D O :   (Wdk>en�Nx0 
  
         / /   R�YShQ@\W[&{2N 
         L o a d S t r i n g W ( h I n s t a n c e ,   I D S _ A P P _ T I T L E ,   s z T i t l e ,   M A X _ L O A D S T R I N G ) ;  
         L o a d S t r i n g W ( h I n s t a n c e ,   I D C _ U N D E C O R A T E D ,   s z W i n d o w C l a s s ,   M A X _ L O A D S T R I N G ) ;  
         M y R e g i s t e r C l a s s ( h I n s t a n c e ) ;  
  
         / /   gbL��^(uz�^R�YS:    
         i f   ( ! I n i t I n s t a n c e   ( h I n s t a n c e ,   n C m d S h o w ) )  
         {  
                 r e t u r n   F A L S E ;  
         }  
  
         H A C C E L   h A c c e l T a b l e   =   L o a d A c c e l e r a t o r s ( h I n s t a n c e ,   M A K E I N T R E S O U R C E ( I D C _ U N D E C O R A T E D ) ) ;  
  
         M S G   m s g ;  
  
         / /   ;N�mo`�_�s:    
         w h i l e   ( G e t M e s s a g e ( & m s g ,   n u l l p t r ,   0 ,   0 ) )  
         {  
                 i f   ( ! T r a n s l a t e A c c e l e r a t o r ( m s g . h w n d ,   h A c c e l T a b l e ,   & m s g ) )  
                 {  
                         T r a n s l a t e M e s s a g e ( & m s g ) ;  
                         D i s p a t c h M e s s a g e ( & m s g ) ;  
                 }  
         }  
  
         r e t u r n   ( i n t )   m s g . w P a r a m ;  
 }  
  
  
  
 / /  
 / /     �Qpe:   M y R e g i s t e r C l a s s ( )  
 / /  
 / /     �v�v:   �l�Q�z�S{|0 
 / /  
 A T O M   M y R e g i s t e r C l a s s ( H I N S T A N C E   h I n s t a n c e )  
 {  
         W N D C L A S S E X W   w c e x ;  
  
         w c e x . c b S i z e   =   s i z e o f ( W N D C L A S S E X ) ;  
  
         w c e x . s t y l e                     =   C S _ H R E D R A W   |   C S _ V R E D R A W   |   C S _ O W N D C ;  
         w c e x . l p f n W n d P r o c         =   W n d P r o c ;  
         w c e x . c b C l s E x t r a           =   0 ;  
         w c e x . c b W n d E x t r a           =   0 ;  
         w c e x . h I n s t a n c e             =   h I n s t a n c e ;  
         w c e x . h I c o n                     =   L o a d I c o n ( h I n s t a n c e ,   M A K E I N T R E S O U R C E ( I D I _ U N D E C O R A T E D ) ) ;  
         w c e x . h C u r s o r                 =   L o a d C u r s o r ( n u l l p t r ,   I D C _ A R R O W ) ;  
         w c e x . h b r B a c k g r o u n d     =   ( H B R U S H ) ( C O L O R _ B A C K G R O U N D ) ;  
 	 w c e x . l p s z M e n u N a m e 	 =   N U L L ;   / /   M A K E I N T R E S O U R C E W ( I D C _ U N D E C O R A T E D ) ;  
         w c e x . l p s z C l a s s N a m e     =   s z W i n d o w C l a s s ;  
         w c e x . h I c o n S m                 =   L o a d I c o n ( w c e x . h I n s t a n c e ,   M A K E I N T R E S O U R C E ( I D I _ S M A L L ) ) ;  
  
         A T O M   r e s u l t   =   R e g i s t e r C l a s s E x W ( & w c e x ) ;  
  
 	 i f   ( ! r e s u l t )  
 	 {  
 	 	 M e s s a g e B o x ( n u l l p t r ,  
 	 	 	 _ T ( " F a i l e d   t o   c a l l   f u n c t i o n   ` R e g i s t e r C l a s s E x W ` ! " ) ,  
 	 	 	 n u l l p t r ,  
 	 	 	 M B _ O K ) ;  
  
 	 	 r e t u r n   0 ;  
 	 }  
  
 	 r e t u r n   r e s u l t ;  
 }  
  
 / /  
 / /       �Qpe:   I n i t I n s t a n c e ( H I N S T A N C E ,   i n t )  
 / /  
 / /       �v�v:   �OX[�[�O�S�gv^R�^;N�z�S 
 / /  
 / /       �lʑ:    
 / /  
 / /                 (Wdk�Qpe-N�b�N(WhQ@\�Sϑ-N�OX[�[�O�S�gv^ 
 / /                 R�^�T>f:y;Nz�^�z�S0 
 / /  
 B O O L   I n i t I n s t a n c e ( H I N S T A N C E   h I n s t a n c e ,   i n t   n C m d S h o w )  
 {  
       h I n s t   =   h I n s t a n c e ;   / /   \�[�O�S�gX[�P(WhQ@\�Sϑ-N 
  
       H W N D   h W n d   =   C r e a t e W i n d o w W (  
 	       s z W i n d o w C l a s s ,  
 	       s z T i t l e ,  
 	       W S _ P O P U P ,   / / W S _ O V E R L A P P E D W I N D O W ,  
 	       C W _ U S E D E F A U L T ,  
 	       0 ,  
 	       C W _ U S E D E F A U L T ,  
 	       0 ,  
 	       n u l l p t r ,  
 	       n u l l p t r ,  
 	       h I n s t a n c e ,  
 	       n u l l p t r ) ;  
  
       i f   ( ! h W n d )  
       {  
             r e t u r n   F A L S E ;  
       }  
  
       S h o w W i n d o w ( h W n d ,   n C m d S h o w ) ;  
       U p d a t e W i n d o w ( h W n d ) ;  
  
       r e t u r n   T R U E ;  
 }  
  
  
  
 / /  
 / /     �Qpe:   W n d P r o c ( H W N D ,   U I N T ,   W P A R A M ,   L P A R A M )  
 / /  
 / /     �v�v:         Yt;N�z�S�v�mo`0 
 / /  
 / /     W M _ C O M M A N D     -   Yt�^(uz�^܃US 
 / /     W M _ P A I N T         -   �~6R;N�z�S 
 / /     W M _ D E S T R O Y     -   �S� ��Q�mo`v^ԏ�V 
 / /  
 / /  
 L R E S U L T   C A L L B A C K   W n d P r o c ( H W N D   h W n d ,   U I N T   m e s s a g e ,   W P A R A M   w P a r a m ,   L P A R A M   l P a r a m )  
 {  
 	 s t a t i c   H D C 	 	 h D C ;  
 	 s t a t i c   H G L R C 	 h R C ;  
  
         s w i t c h   ( m e s s a g e )  
         {  
 	 c a s e   W M _ C R E A T E :  
 	 {  
 	 	 P I X E L F O R M A T D E S C R I P T O R   p f d   =  
 	 	 {  
 	 	 	 s i z e o f ( P I X E L F O R M A T D E S C R I P T O R ) ,  
 	 	 	 1 ,  
 	 	 	 P F D _ D R A W _ T O _ W I N D O W   |   P F D _ S U P P O R T _ O P E N G L   |   P F D _ D O U B L E B U F F E R ,         / / F l a g s  
 	 	 	 P F D _ T Y P E _ R G B A ,                 / /   T h e   k i n d   o f   f r a m e b u f f e r .   R G B A   o r   p a l e t t e .  
 	 	 	 3 2 ,                                       / /   C o l o r d e p t h   o f   t h e   f r a m e b u f f e r .  
 	 	 	 0 ,   0 ,   0 ,   0 ,   0 ,   0 ,  
 	 	 	 0 ,  
 	 	 	 0 ,  
 	 	 	 0 ,  
 	 	 	 0 ,   0 ,   0 ,   0 ,  
 	 	 	 2 4 ,                                       / /   N u m b e r   o f   b i t s   f o r   t h e   d e p t h b u f f e r  
 	 	 	 8 ,                                         / /   N u m b e r   o f   b i t s   f o r   t h e   s t e n c i l b u f f e r  
 	 	 	 0 ,                                         / /   N u m b e r   o f   A u x   b u f f e r s   i n   t h e   f r a m e b u f f e r .  
 	 	 	 P F D _ M A I N _ P L A N E ,  
 	 	 	 0 ,  
 	 	 	 0 ,   0 ,   0  
 	 	 } ;  
  
 	 	 h D C   =   G e t D C ( h W n d ) ;  
  
 	 	 i n t     l e t W i n d o w s C h o o s e T h i s P i x e l F o r m a t ;  
 	 	 l e t W i n d o w s C h o o s e T h i s P i x e l F o r m a t   =   C h o o s e P i x e l F o r m a t ( h D C ,   & p f d ) ;  
 	 	 S e t P i x e l F o r m a t ( h D C ,   l e t W i n d o w s C h o o s e T h i s P i x e l F o r m a t ,   & p f d ) ;  
  
 	 	 h R C   =   w g l C r e a t e C o n t e x t ( h D C ) ;  
 	 	 w g l M a k e C u r r e n t ( h D C ,   h R C ) ;  
  
 	 	 M e s s a g e B o x A ( 0 ,   ( c h a r * ) g l G e t S t r i n g ( G L _ V E R S I O N ) ,   " O P E N G L   V E R S I O N " ,   0 ) ;  
 	 }  
 	 b r e a k ;  
 	 c a s e   W M _ C O M M A N D :  
                 {  
                         i n t   w m I d   =   L O W O R D ( w P a r a m ) ;  
                         / /   R�g܃US	��b:    
                         s w i t c h   ( w m I d )  
                         {  
                         c a s e   I D M _ A B O U T :  
                                 D i a l o g B o x ( h I n s t ,   M A K E I N T R E S O U R C E ( I D D _ A B O U T B O X ) ,   h W n d ,   A b o u t ) ;  
                                 b r e a k ;  
                         c a s e   I D M _ E X I T :  
                                 D e s t r o y W i n d o w ( h W n d ) ;  
                                 b r e a k ;  
                         d e f a u l t :  
                                 r e t u r n   D e f W i n d o w P r o c ( h W n d ,   m e s s a g e ,   w P a r a m ,   l P a r a m ) ;  
                         }  
                 }  
                 b r e a k ;  
         c a s e   W M _ P A I N T :  
                 {  
                         P A I N T S T R U C T   p s ;  
                         H D C   h d c   =   B e g i n P a i n t ( h W n d ,   & p s ) ;  
                         / /   T O D O :   (WdkY�m�RO(u  h d c   �v�NUO�~�V�Nx. . .  
                         E n d P a i n t ( h W n d ,   & p s ) ;  
                 }  
                 b r e a k ;  
         c a s e   W M _ D E S T R O Y :  
 	 	 w g l M a k e C u r r e n t ( h D C ,   N U L L ) ;  
 	 	 w g l D e l e t e C o n t e x t ( h R C ) ;  
  
                 P o s t Q u i t M e s s a g e ( 0 ) ;  
                 b r e a k ;  
         d e f a u l t :  
                 r e t u r n   D e f W i n d o w P r o c ( h W n d ,   m e s s a g e ,   w P a r a m ,   l P a r a m ) ;  
         }  
         r e t u r n   0 ;  
 }  
  
 / /    sQ�N Fh�v�mo`Ytz�^0 
 I N T _ P T R   C A L L B A C K   A b o u t ( H W N D   h D l g ,   U I N T   m e s s a g e ,   W P A R A M   w P a r a m ,   L P A R A M   l P a r a m )  
 {  
         U N R E F E R E N C E D _ P A R A M E T E R ( l P a r a m ) ;  
         s w i t c h   ( m e s s a g e )  
         {  
         c a s e   W M _ I N I T D I A L O G :  
                 r e t u r n   ( I N T _ P T R ) T R U E ;  
  
         c a s e   W M _ C O M M A N D :  
                 i f   ( L O W O R D ( w P a r a m )   = =   I D O K   | |   L O W O R D ( w P a r a m )   = =   I D C A N C E L )  
                 {  
                         E n d D i a l o g ( h D l g ,   L O W O R D ( w P a r a m ) ) ;  
                         r e t u r n   ( I N T _ P T R ) T R U E ;  
                 }  
                 b r e a k ;  
         }  
         r e t u r n   ( I N T _ P T R ) F A L S E ;  
 }  
 