# Emerald Imperium 2.0 Changelog

## Quality of Life

- Five difficulty modes are now available:
  - **Vanilla**: A closer-to-mainline experience for players who want to enjoy Gen 9 mechanics and Pokémon without the added difficulty.
  - **Easy**: Lower enemy levels than Normal, with switch mode enabled and items usable in battle.
  - **Normal**: The standard difficulty that existed in 1.3. Harder than mainline games and a genuine challenge.
  - **Hard**: Designed for nuzlockers who want a more complete challenge, featuring revamped and added fights.
  - **Hall of Fame**: Includes built-in restrictions matching the HoF ruleset (banned moves, banned abilities, etc.).
- PC storage expanded to 26 boxes.
- New toggle to turn music on or off.
- Increased catch rates for several early-game Pokémon.
- Roamers have been removed and replaced by the summoning lady in Victory Road.
- Hall of Fame screens now display all missing forms, including Mega Zygarde.
- Smashing a rock now yields an encounter 50% of the time (before other multipliers).
- Mandatory, non-delayable trainers no longer use dynamic levels, making calcs easier.
- Added a pre-status and pre-damage menu to the party menu for easier battle preparation.
- Added a "Return All Items" function to the PC menu for both party and PC.
- Field moves have their own submenu to reduce clutter in the party menu.
- Added the Instant Candy, which levels a Pokémon up to the level cap or its evolution level.

## Post Game

- Every legendary is now catchable post game, along with every Pokémon in the dex.
- New locations have been added for the new legendaries.
- Revamped Battle Frontier ([YouTube changelog video](https://www.youtube.com/watch?v=Zrp2SOjJVcg)).

## Pokémon

- Corviknight now has Mirror Armor as its standard ability and Pressure as its hidden ability.
- The ZA mega evolutions have been added to the game.
- Mega Chimecho has a custom ability, Wistful Echo, which lets it copy sound moves used by other Pokémon on the field.
- Gogoat's Special Attack has been raised from 67 to 75.

## Moves

- Several moves (multi-hit, trapping, and powder moves) have received accuracy buffs to make them more consistent.

## Learnsets

- Magmortar now learns Armor Cannon.
- Snubbull and Granbull now learn Fake Out.
- Many legendaries now learn damaging moves before level 15 to improve the early game in randomizers.
- Rotom-Mow can freely relearn Leaf Storm rather than only on form change.

## Item Locations
- Superpower and Focus Blast locations have been swapped.
- Bright Powder is now available in Rustboro's Trainer School. 

## Walkthrough Changes

- All routes below Mossdeep City now require Dive to access.
- The Petalburg City Fisherman now gives out a single Fishing Rod; the Good Rod and Super Rod have been removed.
- Bottle Caps are now awarded by Gym Leaders in Hard Mode and HoF Mode, and can be spent on resources or Pokémon optimization.
- Fallarbor, Lavaridge, and Pacifidlog eggs are limited to one each in Hard Mode and HoF Mode.
- In Hard Mode and HoF Mode, Mt. Pyre summoning pulls a random Pokémon from a pool of weaker legendaries and mythicals.
- In Hard Mode and HoF Mode, Shoal Cave summoning pulls a random Pokémon from a pool of Paradox Pokémon or Ultra Beasts.
- In Hard Mode and HoF Mode, Victory Road summoning pulls a random Pokémon from a pool of legendaries and mythicals.
- Fights in Evergrande, Route 121, Mossdeep, and Sootopolis no longer award gift Pokémon in Hard Mode and HoF Mode.
- The Mauville gift Pikachu is randomized in Hard Mode and HoF Mode.

## Game Mechanics

### Changes

- If a Pokémon is frostbitten, hitting it with a damaging Fire-type move or a damaging move with a burn chance will remove the frostbite.
- Abilities that manipulate encounters (Harvest, Storm Drain, Flash Fire, Magnet Pull, Static, Lightning Rod) do not work in Hard Mode or HoF Mode.
- Ice Spinner, Defog, and Steel Roller do not remove terrain in Hard Mode or HoF Mode.
- Leftovers, Power Herb, Mirror Herb, and White Herb can only be obtained via Pickup at level 91 or higher (post game).
- Armor Cannon is no longer boosted by Mega Launcher. Octazooka, Flash Cannon, and Snipe Shot are now Mega Launcher-boosted.
- Critical hit rate raised from 1/24 to 1/16.
- AI moves now have maxed PP.

### Bugfixes

- Fixed a bug where a Pokémon with Gorilla Tactics holding a choice item that lost its item would not be locked into its chosen move.
- Fixed regional forms appearing multiple times in the DexNav.
- Negative-priority moves are no longer blocked by Dazzling, Queenly Majesty, or Armor Tail.
- Flower Gift now correctly boosts Cherrim's Attack and Speed by 50% in sun, rather than boosting Attack and Special Defense of Cherrim and its ally.

## AI

### Changes

#### Switch AI

- The AI no longer factors in its own Explosion, Self-Destruct, or Misty Explosion damage when evaluating how much damage a switch-in candidate would deal to the player.
- Most switch functions now have a 50% chance of triggering when their conditions are met and a valid party candidate exists, with the expection of -3 to the main attacking stat.
- Removed the two-turn move and trapper switch AI functions.
- Absorb AI now accounts for Mountaineer immunity.
- The AI now checks whether it wins the current 1v1 across multiple functions, avoiding aimless switches.
- Removed type matchup and Fast/Slow Threaten checks from post-KO and mid-turn candidate evaluation.
- The AI now checks whether the Encore/AllMovesBad coinflips already failed before rolling AllScoresBad, avoiding double rolls that would inflate switch chances.
- Trimmed the list of "important" moves that block bad-odds switches down to fight-warping moves only.
- BestDamageMonId and DamageMonIds can now include a Pokémon that outspeeds and is OHKO'd.
- Added a flag for certain trainers to send in a random valid switch candidate in case of ties.
- Double battles no longer use type matchup and highest damage for post-KO logic; they now use the single-battle logic, along with:
  - The switch-in candidate checks whether the player's other on-field Pokémon can OHKO it, and disincentivizes switching in if so.
  - Support mons (Pokémon with moves that disrupt fights or support their partner) are now included in these checks.

#### Move Selection AI

- The AI only treats Attack/Sp.Atk dropping moves on the target as beneficial if the player's best damaging move is of that category.
- Added logic for selecting Clangorous Soul and Fillet Away.
- Improved logic for selecting Belly Drum.
- Best damage move comparison no longer factors in accuracy, allowing the AI to click inaccurate moves more often.
- Best damage move comparison now only accounts for guaranteed effects.
- Knock Off is now considered a positive effect and no longer gets +2 if the player has an item that can be knocked off.
- Speed-dropping and speed-boosting moves now consider whether the AI will outspeed after the move and whether that matters for the current matchup.
- The AI is less likely to spam setup moves.
- ShouldPivot (pivot move AI) has been fully reworked to align with switch AI behavior.
- Justified and other CheckBadMove conditions now factor in whether the AI sees a kill with those moves.
- Stat-lowering moves now account for the player having Competitive or Defiant.
- New Pursuit handling: 30% chance to match a fast/slow kill in scoring.
- The AI no longer treats self-stat-dropping moves as negative if it's holding a White Herb.
- Protect AI has been reworked to be more interactive and less abusable.
- Protect can be clicked multiple turns in a row when conditions are met.
- Pure status moves now often tie with the best damage move (score 101).
- The AI may still set up hazards if the player has a way to remove them(20%).
- Last Chance (priority when dead) has been fully removed from double battles.
- Shed Tail and Substitute AI have been reworked:
  - Substitute and Shed Tail are only prevented by damaging sound moves.
  - Both Shed Tail and Substitute are capped at score 104 (slow-kill best damage move is 105).
  - Shed Tail no longer considers self-damage when deciding whether to click.
- Sucker Punch becomes a 50/50 after failing once.
- Added Stuff Cheeks logic for beneficial berries.
- Counter and Mirror Coat gain +1 score if the player's best move is of the matching category, and +3 if the player only has moves of that category.
- Follow Me is heavily incentivized when the player can KO the partner Pokémon.
- Fights with the Powerful Status flag will no longer try to reverse Trick Room in edge cases.
- Improved handling of trapping moves.
- Geomancy now scores +1 (down from +3) for the user holding a Power Herb.

#### General AI

- The AI now accounts for Parental Bond and ORAORAORA!! breaking Sturdy/Focus Sash in hits-to-KO calculations.
- The AI is more aware of whether its item and ability let it endure a hit.
- The AI will NOT consider whether it can endure an extra hit for setup decisions, preventing setup abuse.
- The AI no longer misreads the speed of priority moves in CompareMoveSpeeds() when Fake Out or a Protect move was used the previous turn.
- Bolt Beak and Fishious Rend: when a Pokémon with these moves switches in, the AI ignores your last-used move from that turn in damage calculations, preventing weird behavior after you took a KO with a priority move.
- Bolt Beak and Fishious Rend also no longer see reduced damage if the player used Fake Out or a Protect move the previous turn.
- The AI no longer sees the player's Super Fang, Nature's Madness, or Ruination damage when evaluating damage taken by switch-in candidates.
- When checking whether the AI's on-field Pokémon meets a bad-odds condition, it uses the random shouldConsiderExplosion check to decide if Explosion is a viable move.
- The AI no longer considers its own Explosion, Self-Destruct, Final Gambit, or Misty Explosion damage when evaluating a switch-in candidate's damage against the player.
- The AI no longer sees the player's Explosion, Self-Destruct, or Misty Explosion damage when evaluating:
  - damage taken by switch-in candidates;
  - damage taken by the on-field AI Pokémon for bad-odds conditions;
  - player hits-to-KO on the AI during setup calculations;
  - Last Chance AI (fast OHKO with only Explosion effects no longer triggers a Last Chance boost);
  - Destiny Bond scoring (slow OHKO with only Explosion effects no longer boosts Destiny Bond);
  - player hits-to-KO under the AI's ForceSetupFirstTurn flag;
  - player hits-to-KO when deciding to use a pivot move;
  - whether the player KOs the AI, for guaranteed and chance flinch moves;
  - player damage and hits-to-KO when evaluating recovery moves;
  - the player's best damaging move when deciding to use a Substitute (Substitute, Shed Tail, etc.) or a damaging setup move (Belly Drum, Fillet Away, Clangorous Soul).
- AI_MoveMakesContact now accounts for Kicking Shoes and Punching Gloves.
- The AI now calculates Meteor Beam and Electro Shot with +1 Sp. Atk accurately.

### Bugfixes

- Fixed the AI reading your moves' priority incorrectly while you were choice-locked.
- Fixed the AI reading the wrong ability on your Pokémon in post-KO logic under certain conditions (pivot move KO, mega evolution KO, etc.).
- Fixed the AI reading its own dynamic-type moves incorrectly.
- Fixed the AI clicking moves at random when its best move was disincentivized.
- The AI now sees Shield Dust on the player's Pokémon correctly.
- Fixed damaging setup moves being treated as having both a negative and a positive effect.
- Fixed the AI misevaluating self-speed-dropping moves like Hammer Arm when deciding whether speed drops should block setup.
- The AI now correctly recognizes when the player has Rapid Spin for moves with secondary hazard effects such as Stone Axe.
- The AI now accounts for its positive move effects being removed by Sheer Force when evaluating guaranteed and secondary effects.
- The AI now correctly reads the effectiveness of its moves with secondary status effects when evaluating those effects.
- The AI now sees Retaliate damage properly in every situation.
- Fixed Parental Bond being incorrectly applied to the AI's damage calculations for spread moves in double battles.
- Fixed the AI trying to pivot instead of hard switching when it would die to a priority move.
- Fixed the AI being unable to click a pivot move when it was the only kill.
- Fixed the AI using its own Pokémon's data to determine whether the player was trapped.
- Fixed the AI clicking recovery moves at full HP.
- The AI now only considers conditions relevant to Fake Out in ShouldTryToFlinch.
- The AI no longer treats itself as taking an extra 10% Life Orb damage when evaluating mid-turn switch-in hits-to-KO.
- The AI now factors in Grassy Terrain healing when evaluating mid-turn switch-in hits-to-KO.
- Fixed the AI missing the player's Sash/Sturdy when evaluating a mid-turn switch-in candidate.
- Fixed the AI failing to recognize itself as a revenge killer when it dealt damage exactly equal to the player's Pokémon's HP.
- Fixed scoring against Dazzling, Queenly Majesty, and Armor Tail to prevent unintended switches.
