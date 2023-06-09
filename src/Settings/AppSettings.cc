# i n c l u d e   " A p p S e t t i n g s . h " 
 # i n c l u d e   " Q G C P a l e t t e . h " 
 # i n c l u d e   " Q G C A p p l i c a t i o n . h " 
 # i n c l u d e   " P a r a m e t e r M a n a g e r . h " 
 
 # i n c l u d e   < Q Q m l E n g i n e > 
 # i n c l u d e   < Q t Q m l > 
 # i n c l u d e   < Q S t a n d a r d P a t h s > 
 
 c o n s t   c h a r *   A p p S e t t i n g s : : p a r a m e t e r F i l e E x t e n s i o n   =       " p a r a m s " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : p l a n F i l e E x t e n s i o n   =                 " p l a n " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : m i s s i o n F i l e E x t e n s i o n   =           " m i s s i o n " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : w a y p o i n t s F i l e E x t e n s i o n   =       " w a y p o i n t s " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : f e n c e F i l e E x t e n s i o n   =               " f e n c e " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : r a l l y P o i n t F i l e E x t e n s i o n   =     " r a l l y " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : t e l e m e t r y F i l e E x t e n s i o n   =       " t l o g " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : k m l F i l e E x t e n s i o n   =                   " k m l " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : s h p F i l e E x t e n s i o n   =                   " s h p " ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : l o g F i l e E x t e n s i o n   =                   " u l g " ; 
 
 c o n s t   c h a r *   A p p S e t t i n g s : : p a r a m e t e r D i r e c t o r y   =               Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " P a r a m e t e r s " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : t e l e m e t r y D i r e c t o r y   =               Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " T e l e m e t r y " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : m i s s i o n D i r e c t o r y   =                   Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " M i s s i o n s " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : l o g D i r e c t o r y   =                           Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " L o g s " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : v i d e o D i r e c t o r y   =                       Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " V i d e o " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : p h o t o D i r e c t o r y   =                       Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " P h o t o " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : c r a s h D i r e c t o r y   =                       Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " C r a s h L o g s " ) ; 
 c o n s t   c h a r *   A p p S e t t i n g s : : c u s t o m A c t i o n s D i r e c t o r y   =       Q T _ T R A N S L A T E _ N O O P ( " A p p S e t t i n g s " ,   " C u s t o m A c t i o n s " ) ; 
 
 / /   R e l e a s e   l a n g u a g e s   a r e   9 0 % +   c o m p l e t e 
 Q L i s t < i n t >   A p p S e t t i n g s : : _ r g R e l e a s e L a n g u a g e s   =   { 
         Q L o c a l e : : A n y L a n g u a g e ,     / /   S y s t e m 
         Q L o c a l e : : C h i n e s e , 
         Q L o c a l e : : E n g l i s h , 
         Q L o c a l e : : K o r e a n , 
         Q L o c a l e : : A z e r b a i j a n i , 
 } ; 
 / /   P a r t i a l   l a n g u a g e s   a r e   4 0 % +   c o m p l e t e 
 Q L i s t < i n t >   A p p S e t t i n g s : : _ r g P a r t i a l L a n g u a g e s   =   { 
         Q L o c a l e : : G e r m a n , 
         Q L o c a l e : : T u r k i s h , 
 } ; 
 
 D E C L A R E _ S E T T I N G G R O U P ( A p p ,   " " ) 
 { 
         q m l R e g i s t e r U n c r e a t a b l e T y p e < A p p S e t t i n g s > ( " Q G r o u n d C o n t r o l . S e t t i n g s M a n a g e r " ,   1 ,   0 ,   " A p p S e t t i n g s " ,   " R e f e r e n c e   o n l y " ) ; 
         Q G C P a l e t t e : : s e t G l o b a l T h e m e ( i n d o o r P a l e t t e ( ) - > r a w V a l u e ( ) . t o B o o l ( )   ?   Q G C P a l e t t e : : D a r k   :   Q G C P a l e t t e : : L i g h t ) ; 
 
         Q S e t t i n g s   s e t t i n g s ; 
 
         / /   T h e s e   t w o   " t y p e "   k e y s   w e r e   c h a n g e d   t o   " c l a s s "   v a l u e s 
         s t a t i c   c o n s t   c h a r *   d e p r e c a t e d F i r m w a r e T y p e K e y         =   " o f f l i n e E d i t i n g F i r m w a r e T y p e " ; 
         s t a t i c   c o n s t   c h a r *   d e p r e c a t e d V e h i c l e T y p e K e y           =   " o f f l i n e E d i t i n g V e h i c l e T y p e " ; 
         i f   ( s e t t i n g s . c o n t a i n s ( d e p r e c a t e d F i r m w a r e T y p e K e y ) )   { 
                 s e t t i n g s . s e t V a l u e ( d e p r e c a t e d F i r m w a r e T y p e K e y ,   Q G C M A V L i n k : : f i r m w a r e C l a s s ( s t a t i c _ c a s t < M A V _ A U T O P I L O T > ( s e t t i n g s . v a l u e ( d e p r e c a t e d F i r m w a r e T y p e K e y ) . t o I n t ( ) ) ) ) ; 
         } 
         i f   ( s e t t i n g s . c o n t a i n s ( d e p r e c a t e d V e h i c l e T y p e K e y ) )   { 
                 s e t t i n g s . s e t V a l u e ( d e p r e c a t e d V e h i c l e T y p e K e y ,   Q G C M A V L i n k : : v e h i c l e C l a s s ( s t a t i c _ c a s t < M A V _ T Y P E > ( s e t t i n g s . v a l u e ( d e p r e c a t e d V e h i c l e T y p e K e y ) . t o I n t ( ) ) ) ) ; 
         } 
 
         Q S t r i n g L i s t   d e p r e c a t e d K e y N a m e s     =   {   " v i r t u a l J o y s t i c k C e n t r a l i z e d " ,                       " o f f l i n e E d i t i n g F i r m w a r e T y p e " ,       " o f f l i n e E d i t i n g V e h i c l e T y p e "   } ; 
         Q S t r i n g L i s t   n e w K e y N a m e s                   =   {   " v i r t u a l J o y s t i c k A u t o C e n t e r T h r o t t l e " ,         " o f f l i n e E d i t i n g F i r m w a r e C l a s s " ,     " o f f l i n e E d i t i n g V e h i c l e C l a s s "   } ; 
         s e t t i n g s . b e g i n G r o u p ( _ s e t t i n g s G r o u p ) ; 
         f o r   ( i n t   i = 0 ;   i < d e p r e c a t e d K e y N a m e s . c o u n t ( ) ;   i + + )   { 
                 i f   ( s e t t i n g s . c o n t a i n s ( d e p r e c a t e d K e y N a m e s [ i ] ) )   { 
                         s e t t i n g s . s e t V a l u e ( n e w K e y N a m e s [ i ] ,   s e t t i n g s . v a l u e ( d e p r e c a t e d K e y N a m e s [ i ] ) ) ; 
                         s e t t i n g s . r e m o v e ( d e p r e c a t e d K e y N a m e s [ i ] ) ; 
                 } 
         } 
 
         / /   I n s t a n t i a t e   s a v e P a t h   s o   w e   c a n   c h e c k   f o r   o v e r r i d e   a n d   s e t u p   d e f a u l t   p a t h   i f   n e e d e d 
 
         S e t t i n g s F a c t *   s a v e P a t h F a c t   =   q o b j e c t _ c a s t < S e t t i n g s F a c t * > ( s a v e P a t h ( ) ) ; 
         Q S t r i n g   a p p N a m e   =   q g c A p p ( ) - > a p p l i c a t i o n N a m e ( ) ; 
 # i f d e f   _ _ m o b i l e _ _ 
         / /   M o b i l e   b u i l d s   a l w a y s   u s e   t h e   r u n t i m e   g e n e r a t e d   l o c a t i o n   f o r   s a v e P a t h . 
         b o o l   u s e r H a s M o d i f i e d S a v e P a t h   =   f a l s e ; 
 # e l s e 
         b o o l   u s e r H a s M o d i f i e d S a v e P a t h   =   ! s a v e P a t h F a c t - > r a w V a l u e ( ) . t o S t r i n g ( ) . i s E m p t y ( )   | |   ! _ n a m e T o M e t a D a t a M a p [ s a v e P a t h N a m e ] - > r a w D e f a u l t V a l u e ( ) . t o S t r i n g ( ) . i s E m p t y ( ) ; 
 # e n d i f 
 
         i f   ( ! u s e r H a s M o d i f i e d S a v e P a t h )   { 
 # i f d e f   _ _ m o b i l e _ _ 
         # i f d e f   _ _ i o s _ _ 
                 / /   T h i s   w i l l   e x p o s e   t h e   d i r e c t o r i e s   d i r e c t l y   t o   t h e   F i l e   i O s   a p p 
                 Q D i r   r o o t D i r   =   Q D i r ( Q S t a n d a r d P a t h s : : w r i t a b l e L o c a t i o n ( Q S t a n d a r d P a t h s : : D o c u m e n t s L o c a t i o n ) ) ; 
                 s a v e P a t h F a c t - > s e t R a w V a l u e ( r o o t D i r . a b s o l u t e P a t h ( ) ) ; 
         # e l s e 
                 Q D i r   r o o t D i r   =   Q D i r ( Q S t a n d a r d P a t h s : : w r i t a b l e L o c a t i o n ( Q S t a n d a r d P a t h s : : G e n e r i c D a t a L o c a t i o n ) ) ; 
                 s a v e P a t h F a c t - > s e t R a w V a l u e ( r o o t D i r . f i l e P a t h ( a p p N a m e ) ) ; 
         # e n d i f 
                 s a v e P a t h F a c t - > s e t V i s i b l e ( f a l s e ) ; 
 # e l s e 
                 Q D i r   r o o t D i r   =   Q D i r ( Q S t a n d a r d P a t h s : : w r i t a b l e L o c a t i o n ( Q S t a n d a r d P a t h s : : D o c u m e n t s L o c a t i o n ) ) ; 
                 s a v e P a t h F a c t - > s e t R a w V a l u e ( r o o t D i r . f i l e P a t h ( a p p N a m e ) ) ; 
 # e n d i f 
         } 
 
         c o n n e c t ( s a v e P a t h F a c t ,   & F a c t : : r a w V a l u e C h a n g e d ,   t h i s ,   & A p p S e t t i n g s : : s a v e P a t h s C h a n g e d ) ; 
         c o n n e c t ( s a v e P a t h F a c t ,   & F a c t : : r a w V a l u e C h a n g e d ,   t h i s ,   & A p p S e t t i n g s : : _ c h e c k S a v e P a t h D i r e c t o r i e s ) ; 
 
         _ c h e c k S a v e P a t h D i r e c t o r i e s ( ) ; 
 } 
 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   o f f l i n e E d i t i n g F i r m w a r e C l a s s ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   o f f l i n e E d i t i n g V e h i c l e C l a s s ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   o f f l i n e E d i t i n g C r u i s e S p e e d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   o f f l i n e E d i t i n g H o v e r S p e e d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   o f f l i n e E d i t i n g A s c e n t S p e e d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   o f f l i n e E d i t i n g D e s c e n t S p e e d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   b a t t e r y P e r c e n t R e m a i n i n g A n n o u n c e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   d e f a u l t M i s s i o n I t e m A l t i t u d e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   t e l e m e t r y S a v e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   t e l e m e t r y S a v e N o t A r m e d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   a u d i o M u t e d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   c h e c k I n t e r n e t ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   v i r t u a l J o y s t i c k ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   v i r t u a l J o y s t i c k A u t o C e n t e r T h r o t t l e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   a p p F o n t P o i n t S i z e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   s h o w L a r g e C o m p a s s ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   s a v e P a t h ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   u s e C h e c k l i s t ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   e n f o r c e C h e c k l i s t ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   m a p b o x T o k e n ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   m a p b o x A c c o u n t ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   m a p b o x S t y l e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   e s r i T o k e n ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   c u s t o m U R L ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   v w o r l d T o k e n ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   d e f a u l t F i r m w a r e T y p e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   g s t D e b u g L e v e l ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   f o l l o w T a r g e t ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   a p m S t a r t M a v l i n k S t r e a m s ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   e n a b l e T a i s y n c ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   e n a b l e T a i s y n c V i d e o ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   e n a b l e M i c r o h a r d ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   d i s a b l e A l l P e r s i s t e n c e ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   u s e P a i r i n g ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   s a v e C s v T e l e m e t r y ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   f i r s t R u n P r o m p t I d s S h o w n ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   f o r w a r d M a v l i n k ) 
 D E C L A R E _ S E T T I N G S F A C T ( A p p S e t t i n g s ,   f o r w a r d M a v l i n k H o s t N a m e ) 
 
 D E C L A R E _ S E T T I N G S F A C T _ N O _ F U N C ( A p p S e t t i n g s ,   i n d o o r P a l e t t e ) 
 { 
         i f   ( ! _ i n d o o r P a l e t t e F a c t )   { 
                 _ i n d o o r P a l e t t e F a c t   =   _ c r e a t e S e t t i n g s F a c t ( i n d o o r P a l e t t e N a m e ) ; 
                 c o n n e c t ( _ i n d o o r P a l e t t e F a c t ,   & F a c t : : r a w V a l u e C h a n g e d ,   t h i s ,   & A p p S e t t i n g s : : _ i n d o o r P a l e t t e C h a n g e d ) ; 
         } 
         r e t u r n   _ i n d o o r P a l e t t e F a c t ; 
 } 
 
 D E C L A R E _ S E T T I N G S F A C T _ N O _ F U N C ( A p p S e t t i n g s ,   q L o c a l e L a n g u a g e ) 
 { 
         i f   ( ! _ q L o c a l e L a n g u a g e F a c t )   { 
                 _ q L o c a l e L a n g u a g e F a c t   =   _ c r e a t e S e t t i n g s F a c t ( q L o c a l e L a n g u a g e N a m e ) ; 
                 c o n n e c t ( _ q L o c a l e L a n g u a g e F a c t ,   & F a c t : : r a w V a l u e C h a n g e d ,   t h i s ,   & A p p S e t t i n g s : : _ q L o c a l e L a n g u a g e C h a n g e d ) ; 
 
                 F a c t M e t a D a t a *       m e t a D a t a                         =   _ q L o c a l e L a n g u a g e F a c t - > m e t a D a t a ( ) ; 
                 Q S t r i n g L i s t           r g O r i g i n a l S t r i n g s       =   m e t a D a t a - > e n u m S t r i n g s ( ) ; 
                 Q V a r i a n t L i s t         r g O r i g i n a l V a l u e s         =   m e t a D a t a - > e n u m V a l u e s ( ) ; 
                 Q S t r i n g L i s t           r g U p d a t e d S t r i n g s ; 
                 Q V a r i a n t L i s t         r g U p d a t e d V a l u e s ; 
 
                 / /   A l l   b u i l d s   c o n t a i n s   r e l e a s e d   a n d   p a r t i a l   l a n g u a g e s 
                 f o r   ( i n t   i = 0 ;   i < r g O r i g i n a l S t r i n g s . c o u n t ( ) ;   i + + )   { 
                         i f   ( _ r g R e l e a s e L a n g u a g e s . c o n t a i n s ( r g O r i g i n a l V a l u e s [ i ] . t o I n t ( ) ) )   { 
                                 r g U p d a t e d S t r i n g s . a p p e n d ( r g O r i g i n a l S t r i n g s [ i ] ) ; 
                                 r g U p d a t e d V a l u e s . a p p e n d ( r g O r i g i n a l V a l u e s [ i ] ) ; 
                         } 
                 } 
                 f o r   ( i n t   i = 0 ;   i < r g O r i g i n a l S t r i n g s . c o u n t ( ) ;   i + + )   { 
                         i f   ( _ r g P a r t i a l L a n g u a g e s . c o n t a i n s ( r g O r i g i n a l V a l u e s [ i ] . t o I n t ( ) ) )   { 
                                 r g U p d a t e d S t r i n g s . a p p e n d ( r g O r i g i n a l S t r i n g s [ i ]   +   A p p S e t t i n g s : : t r ( "   ( P a r t i a l ) " ) ) ; 
                                 r g U p d a t e d V a l u e s . a p p e n d ( r g O r i g i n a l V a l u e s [ i ] . t o I n t ( ) ) ; 
                         } 
                 } 
 # i f d e f   D A I L Y _ B U I L D 
                 / /   O n l y   d a i l y   b u i l d s   i n c l u d e   f u l l   s e t 
                 f o r   ( i n t   i = 0 ;   i < r g O r i g i n a l S t r i n g s . c o u n t ( ) ;   i + + )   { 
                         i n t   l a n g u a g e I d   =   r g O r i g i n a l V a l u e s [ i ] . t o I n t ( ) ; 
                         i f   ( ! _ r g R e l e a s e L a n g u a g e s . c o n t a i n s ( l a n g u a g e I d )     | |   ! _ r g P a r t i a l L a n g u a g e s . c o n t a i n s ( l a n g u a g e I d ) )   { 
                                 r g U p d a t e d S t r i n g s . a p p e n d ( r g O r i g i n a l S t r i n g s [ i ]   +   A p p S e t t i n g s : : t r ( "   ( T e s t   o n l y ) " ) ) ; 
                                 r g U p d a t e d V a l u e s . a p p e n d ( r g O r i g i n a l V a l u e s [ i ] . t o I n t ( ) ) ; 
                         } 
                 } 
 # e n d i f 
                 m e t a D a t a - > s e t E n u m I n f o ( r g U p d a t e d S t r i n g s ,   r g U p d a t e d V a l u e s ) ; 
         } 
         r e t u r n   _ q L o c a l e L a n g u a g e F a c t ; 
 } 
 
 v o i d   A p p S e t t i n g s : : _ q L o c a l e L a n g u a g e C h a n g e d ( ) 
 { 
         q g c A p p ( ) - > s e t L a n g u a g e ( ) ; 
 } 
 
 v o i d   A p p S e t t i n g s : : _ c h e c k S a v e P a t h D i r e c t o r i e s ( v o i d ) 
 { 
         Q D i r   s a v e P a t h D i r ( s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ) ; 
         i f   ( ! s a v e P a t h D i r . e x i s t s ( ) )   { 
                 Q D i r ( ) . m k p a t h ( s a v e P a t h D i r . a b s o l u t e P a t h ( ) ) ; 
         } 
         i f   ( s a v e P a t h D i r . e x i s t s ( ) )   { 
                 s a v e P a t h D i r . m k d i r ( p a r a m e t e r D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( t e l e m e t r y D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( m i s s i o n D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( l o g D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( v i d e o D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( p h o t o D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( c r a s h D i r e c t o r y ) ; 
                 s a v e P a t h D i r . m k d i r ( c u s t o m A c t i o n s D i r e c t o r y ) ; 
         } 
 } 
 
 v o i d   A p p S e t t i n g s : : _ i n d o o r P a l e t t e C h a n g e d ( v o i d ) 
 { 
         Q G C P a l e t t e : : s e t G l o b a l T h e m e ( i n d o o r P a l e t t e ( ) - > r a w V a l u e ( ) . t o B o o l ( )   ?   Q G C P a l e t t e : : D a r k   :   Q G C P a l e t t e : : L i g h t ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : m i s s i o n S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( m i s s i o n D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : p a r a m e t e r S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( p a r a m e t e r D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : t e l e m e t r y S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( t e l e m e t r y D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : l o g S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( l o g D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : v i d e o S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( v i d e o D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : p h o t o S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( p h o t o D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : c r a s h S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( c r a s h D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q S t r i n g   A p p S e t t i n g s : : c u s t o m A c t i o n s S a v e P a t h ( v o i d ) 
 { 
         Q S t r i n g   p a t h   =   s a v e P a t h ( ) - > r a w V a l u e ( ) . t o S t r i n g ( ) ; 
         i f   ( ! p a t h . i s E m p t y ( )   & &   Q D i r ( p a t h ) . e x i s t s ( ) )   { 
                 Q D i r   d i r ( p a t h ) ; 
                 r e t u r n   d i r . f i l e P a t h ( c u s t o m A c t i o n s D i r e c t o r y ) ; 
         } 
         r e t u r n   Q S t r i n g ( ) ; 
 } 
 
 Q L i s t < i n t >   A p p S e t t i n g s : : f i r s t R u n P r o m p t s I d s V a r i a n t T o L i s t ( c o n s t   Q V a r i a n t &   f i r s t R u n P r o m p t I d s ) 
 { 
         Q L i s t < i n t >   r g I d s ; 
 
         Q S t r i n g L i s t   s t r I d L i s t   =   f i r s t R u n P r o m p t I d s . t o S t r i n g ( ) . s p l i t ( " , " ,   Q t : : S k i p E m p t y P a r t s ) ; 
 
         f o r   ( c o n s t   Q S t r i n g &   s t r I d :   s t r I d L i s t )   { 
                 r g I d s . a p p e n d ( s t r I d . t o I n t ( ) ) ; 
         } 
         r e t u r n   r g I d s ; 
 } 
 
 Q V a r i a n t   A p p S e t t i n g s : : f i r s t R u n P r o m p t s I d s L i s t T o V a r i a n t ( c o n s t   Q L i s t < i n t > &   r g I d s ) 
 { 
         Q S t r i n g L i s t   s t r L i s t ; 
         f o r   ( i n t   i d :   r g I d s )   { 
                 s t r L i s t . a p p e n d ( Q S t r i n g : : n u m b e r ( i d ) ) ; 
         } 
         r e t u r n   Q V a r i a n t ( s t r L i s t . j o i n ( " , " ) ) ; 
 } 
 
 v o i d   A p p S e t t i n g s : : f i r s t R u n P r o m p t I d s M a r k I d A s S h o w n ( i n t   i d ) 
 { 
         Q L i s t < i n t >   r g I d s   =   f i r s t R u n P r o m p t s I d s V a r i a n t T o L i s t ( f i r s t R u n P r o m p t I d s S h o w n ( ) - > r a w V a l u e ( ) ) ; 
         i f   ( ! r g I d s . c o n t a i n s ( i d ) )   { 
                 r g I d s . a p p e n d ( i d ) ; 
                 f i r s t R u n P r o m p t I d s S h o w n ( ) - > s e t R a w V a l u e ( f i r s t R u n P r o m p t s I d s L i s t T o V a r i a n t ( r g I d s ) ) ; 
         } 
 } 
 
 / / /   H a c k   t o   p r o v i d e   l a n g u a g e   s e t t i n g s   a s   e a r l y   i n   t h e   b o o t   p r o c e s s   a s   p o s s i b l e .   M u s t   b e   k n o w n 
 / / /   p r i o r   t o   l o a d i n g   a n y   j s o n   f i l e s . 
 Q L o c a l e : : L a n g u a g e   A p p S e t t i n g s : : _ q L o c a l e L a n g u a g e I D ( v o i d ) 
 { 
         Q S e t t i n g s   s e t t i n g s ; 
 
         i f   ( s e t t i n g s . c h i l d K e y s ( ) . c o n t a i n s ( " l a n g u a g e " ) )   { 
                 / /   W e   n e e d   t o   c o n v e r t   t o   t h e   n e w   s e t t i n g s   k e y / v a l u e s 
 # i f   0 
                 / /   O l d   v a l e s 
                 " e n u m S t r i n g s " :             " S y s t e m , 1J;30@A:8  ( B u l g a r i a n ) , -N�e  ( C h i n e s e ) , N e d e r l a n d s   ( D u t c h ) , E n g l i s h , S u o m i   ( F i n n i s h ) , F r a n � a i s   ( F r e n c h ) , D e u t s c h e   ( G e r m a n ) , ��������  ( G r e e k ) ,   �����  ( H e b r e w ) , I t a l i a n o   ( I t a l i a n ) , �e,g��  ( J a p a n e s e ) , \�m���  ( K o r e a n ) , N o r s k   ( N o r w e g i a n ) , P o l s k i e   ( P o l i s h ) , P o r t u g u � s   ( P o r t u g u e s e ) , P CAA:89  ( R u s s i a n ) , E s p a � o l   ( S p a n i s h ) , S v e n s k a   ( S w e d i s h ) , T � r k   ( T u r k i s h ) , A z e r b a i j a n i   ( A z e r b a i j a n i ) " , 
                 " e n u m V a l u e s " :               " 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 1 0 , 1 1 , 1 2 , 1 3 , 1 4 , 1 5 , 1 6 , 1 7 , 1 8 , 1 9 , 2 0 " , 
 # e n d i f 
                 s t a t i c   Q L i s t < i n t >   r g N e w V a l u e s   =   {   0 , 2 0 , 2 5 , 3 0 , 3 1 , 3 6 , 3 7 , 4 2 , 4 3 , 4 8 , 5 8 , 5 9 , 6 6 , 8 5 , 9 0 , 9 1 , 9 6 , 1 1 1 , 1 1 4 , 1 2 5 , 1 5   } ; 
 
                 i n t   o l d V a l u e   =   s e t t i n g s . v a l u e ( " l a n g u a g e " ) . t o I n t ( ) ; 
                 s e t t i n g s . s e t V a l u e ( q L o c a l e L a n g u a g e N a m e ,   r g N e w V a l u e s [ o l d V a l u e ] ) ; 
                 s e t t i n g s . r e m o v e ( " l a n g u a g e " ) ; 
         } 
 
         Q L o c a l e : : L a n g u a g e   i d   =   s e t t i n g s . v a l u e ( q L o c a l e L a n g u a g e N a m e ,   Q L o c a l e : : A n y L a n g u a g e ) . v a l u e < Q L o c a l e : : L a n g u a g e > ( ) ; 
         i f   ( i d   = =   Q L o c a l e : : A n y L a n g u a g e )   { 
 # i f n d e f   D A I L Y _ B U I L D 
                 / /   S t a b l e   b u i l d s   o n l y   s u p p o r t   r e l e a s e d   a n d   p a r t i a l   l a n g u a g e s 
                 i f   ( ! _ r g R e l e a s e L a n g u a g e s . c o n t a i n s ( i d )   & &   _ r g P a r t i a l L a n g u a g e s . c o n t a i n s ( i d ) )   { 
                         i d   =   Q L o c a l e : : E n g l i s h ; 
                 } 
 # e n d i f 
         } 
 
         r e t u r n   i d ; 
 } 
 