/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** resource_quest
*/

#include "game.h"

//resource constante des quêtes
///////////////////////////////////////////////////////////////////////////

const sfVector2f joe = {508, 736};
const sfVector2f kenji = {325, 467};
const sfVector2f michael = {585, 463};
const sfVector2f consin_mich = {1070, 458};
const sfVector2f bernard = {1722, 701};
const sfVector2f chuck = {865, 585};

///////////////////////////////////////////////////////////////////////////

//les outils de joe

const char quest_1_title[] = "les outils de jo";

const char quest_1_describe[] = "Je m’appelle Jo je suis actuellement très\n\
occupé à réparer ma caravane mais Kenji a utilisé\nrécemment ma caisse à\
outils et il a oublié de\nremettre la clé à molette. Attention c’est un \
grand\nmalade vu que tu es nouveau je suis sur qu’il voudra\nse battre pour \
voir si il peut te faire confiance.";

char const quest_1_dialogue[] = "Hey bro, je vais pas te la donner si tu\n\
la veux il va falloir me battre et avec ce corp je\nsuis sûr que je vais\
t’écraser.";

//action id = 3
/*reward : ajoue de la quete 1_2*/

//(rendre)les outils de joe

const char quest_1_2_title[] = "rendre les outils à jo";

const char quest_1_2_describe[] = "Vas rendre ça caisse a outil a Jo";

const char quest_1_2_dialogue[] = "Merci mon amis, je voudrais bien te payer \
un coup,\nmais mon amis Michael à besoin de ton aide apparement\non cousin \
veut se battre contre lui, si tu le sort de\ncette histoire promis je t’offre\
ton du.";

//action id = 5

/* reward : xp */
////////////////////////////////////////////////////////////////////////////////
//le cousin de Michael

const char quest_2_title[] = "le cousin de Michael";

const char quest_2_describe[] = "Bonjour, mon amis mon cousin de ses\n\
grands morts veux se battre mais la dernière fois il a fini\nà l'hôpital et\
ma tante ne veut pas que je le fracasse de\nnouveau. et la famille c’est la\
famille.";

const char quest_2_dialogue[] = "";
//action id = 7
/* obj : tabasser le cousin */
/* reward : declenche 2_2 */

//(suite)le cousin de Michael

const char quest_2_2_title[] = "i'm be back";

const char quest_2_2_describe[] = "Retourn voir jo.";

const char quest_2_2_dialogue[] = "";
//action id = 9
/* parler a jo */
/* reward : declenche 3 */

//retrouver bernard

const char quest_3_title[] = "retrouver bernard";

const char quest_3_describe[] = "Tu es vraiment un bon gars mais\n\
malheureusement on a paumer Bernard c’est un alcoolique,\net le père de Kenji\
donc je suis sur que ce malade voudra\nse battre comme son fils. Tu peux en\
faire ce que tu veux\nmais ne le casse pas, car c’est lui le père de ma\
femme.";

const char quest_3_dialogue[] = "";

//action id = 11
/* reward : declenche 3_2 */

//(rendre)retrouver bernard

const char quest_3_2_title[] = "Ramene Bernard";

const char quest_3_2_describe[] = "Quoi! Tes qui toi, Non j'ai pas envide \
rentrer!";

const char quest_3_2_dialogue[] = "";
//action id = 13
/* reward : declenche FU*** CHUCK NORRIS */

//chuck F***ing Norris

const char quest_4_title[] = "chuck F***ing Norris";

const char quest_4_describe[] = "Selon les indications de Joe chuck Norris \
se situe\nproche de 4 caravanes, il est dangereux et lancera un\ncombat \
acharné dès votre rencontre.";

const char quest_4_dialogue[] = "";
//action id = 15
/* declenche 4_2 */

//THE END

const char quest_4_2_title[] = "THE END";

const char quest_4_2_describe[] = "Retourne voir jo";

const char quest_4_2_dialogue[] = "Félicitation vous êtes reconnu dans tout\n\
le camp, vous êtes pour eux une légende.";

//action id = 17

const bool debug_mode = false;