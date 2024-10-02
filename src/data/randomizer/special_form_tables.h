#include "global.h"
#include "constants/species.h"



const u16 sPaldeanTaurosFormChoices[] = {
    SPECIES_TAUROS_PALDEAN_AQUA_BREED,
    SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    SPECIES_TAUROS_PALDEAN_COMBAT_BREED,
};

const u16 sFloetteFormChoices[] = {
    SPECIES_FLOETTE_BLUE_FLOWER,
    SPECIES_FLOETTE_ORANGE_FLOWER,
    SPECIES_FLOETTE_RED_FLOWER,
    SPECIES_FLOETTE_WHITE_FLOWER,
    SPECIES_FLOETTE_YELLOW_FLOWER,
};

struct RandomizerRareFormInfo {
    u16 commonForm;
    u16 rareForm;
    u32 inverseRareFormChance;
};

const struct RandomizerRareFormInfo sMausholdRareFormInfo =
{
    .commonForm = SPECIES_MAUSHOLD_FAMILY_OF_FOUR,
    .rareForm = SPECIES_MAUSHOLD_FAMILY_OF_THREE,
    .inverseRareFormChance = 100
};

const struct RandomizerRareFormInfo sSinisteaRareFormInfo =
{
    .commonForm = SPECIES_SINISTEA_PHONY,
    .rareForm = SPECIES_SINISTEA_ANTIQUE,
    .inverseRareFormChance = 100
};

const struct RandomizerRareFormInfo sPoltchageistRareFormInfo =
{
    .commonForm = SPECIES_POLTCHAGEIST_COUNTERFEIT,
    .rareForm = SPECIES_POLTCHAGEIST_ARTISAN,
    .inverseRareFormChance = 100
};

const struct RandomizerRareFormInfo sSinistchaRareFormInfo =
{
    .commonForm = SPECIES_SINISTCHA_UNREMARKABLE,
    .rareForm = SPECIES_SINISTCHA_MASTERPIECE,
    .inverseRareFormChance = 100
};

const struct RandomizerRareFormInfo sPolteageistRareFormInfo =
{
    .commonForm = SPECIES_POLTEAGEIST_PHONY,
    .rareForm = SPECIES_POLTEAGEIST_ANTIQUE,
    .inverseRareFormChance = 100
};