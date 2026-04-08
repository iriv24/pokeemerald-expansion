# Emerald Imperium 2.0 changelog

## Quality of life  
- 5 different modes now exist: Vanilla, Easy, Normal, Hard and Hall of Fame. 
  - Vanilla offers an experience closer to mainline games for the players who want to enjoy Gen 9 mechanics and Pokémons without the added difficulty. 
  - Easy has lower level enemies than Normal Mode with the ability to play on switch mode and use items in battle.
  - Normal is the standard difficulty level that existed on 1.3. It is a harder difficulty than mainline games and presents a real challenge for players.
  - Hard is a mode designed for nuzlockers to have a more complete challenge to take on. It has completely different fights. 
  - Hall of Fame has built in restrictions to match the existing HoF ruleset, such as banned moves and abilities. 
-  A prestatus and predamage menu was added to the party menu to make it easier to prepare for battles.
-  26 boxes are now availables to the player to store Pokémons in the PC.
-  New option to toggle music.


## Post Game
- Every legendary is now catchable post game, along with every Pokémon in the dex. 
- New locations for added legendaries. 
- Revamped Battle Frontier ([Youtube Changelog video](https://www.youtube.com/watch?v=Zrp2SOjJVcg))

## Pokémons
- Corviknight now has Mirror Armor as a normal ability and Pressure as hidden ability. 
## Moves 
- Multiple moves (multi-hit, trapping, powder moves) have had their accuracy increased to make them more consistent. 
- 
## Learnsets
- Magmortar now gets Armor Cannon. 
- Snubbull and Granbull now get Fake out. 
- Many legendaries were given damaging moves before level 15 to make the early game more enjoyable in randomizers. 
- 

## Item locations

## Story changes

## Game mechanics 

### Game mechanics changes 
- If a Pokemon is afflicted with frostbite, hitting it with a damaging Fire-type move or damaging move with a burn chance will remove frostbite from that Pokemon.

### Game mechanics bugfixes
- Fixed a bug where a Pokémon with Gorilla Tactics and a choice item that loses its item would not be locked into its chosen move. 
- Fixed regional forms showing multiple times in the dexnav. 
- Negative priority moves will no longer be blocked by Dazzling, Queenly Majesty, and Armor Tail.
- Flower gift now correctly boost's Cherrim's Attack and Speed by 50% in the sun, instead of it and it's ally's Attack and Special Defense by 50%.

## AI 

### AI changes
- AI only sees atk/spatk dropping moves on target as beneficial effect if the player's best damaging move is of that category. 
- AI now accounts for Parental Bond and ORAORAORA!! breaking Sturdy/Focus sash for hits to ko calculation. 
- AI now has logic for selecting Clangorous Soul and Fillet Away.
- AI now has improved logic for selecting Belly Drum.
- AI overall is more aware of whether or not its item and ability allows it to endure a hit.
- AI will NOT consider if it can endure an extra hit for setup consideration to prevent AI abuse.
- AI will no longer incorrectly see the speed of priority moves when running CompareMoveSpeeds() if you used fake out/detect/protect on the previous turn.
- Bolt Beak/Fishious Rend - when a Pokemon with these moves enters the battlefield, they will ignore your last used move on that turn when calculating damage for Bolt Beak/Fishious Rend, preventing unintuitive AI behavior if you took a KO with a priority move.
- AI will not see player Super Fang, Nature's Madness, or Ruination damage when considering damage taken by switch-in candidates.
- When evaluating if the AI Pokemon on field meets a bad odds condition, it will use the random shouldConsiderExplosion check to decide if explosion is a viable move on the field.
- AI will not see its own Explosion, Self-Destruct, or Misty Explosion damage when considering the damage an AI switch-in candidate does to the player.
- AI will not see player Explosion, Self-Destruct, or Misty Explosion damage when considering:
  - damage taken by switch-in candidates;
  - damage taken by the AI Pokemon on the field when deciding if it meets a bad odds condition;
  - player hits to KO on the AI when doing set-up calculations;
  - last chance AI (fast OHKO with only Explosion effects will no longer trigger a Last Chance boost);
  - Destiny Bond scoring (slow OHKO with only Explosion effects will no longer boost Destiny Bond);
  - player hits to KO in AI ForceSetupFirstTurn flag;
  - player hits to KO when deciding to use a pivot move;
  - if the player KOs the AI for flinch moves, both guaranteed and chances;
  - player damage and hits to KO when evaluating recovery moves;
  - the player's best damaging move when deciding to use a Substitute (Substitute, Shed Tail, etc) or damaging setup move (Belly Drum, Fillet Away, Clangorous Soul).
- Fixes were made to AI scoring against Dazzling, Queenly Majesty, and Armor Tail to prevent unintended switch cases from occurring.
- Most AI switch functions now have a 50% chance of triggering when the conditions are met and AI has a valid candidate in the party. 
- 2 turn move and trapper switch AI were removed. 
- AI now accounts for Mountaineer immunity for absorb AI. 
  
### AI bugfixes
- Fixed a bug where AI would see the priority of your moves wrong when you're choice locked.
- Fixed a bug where AI would see the wrong ability on your Pokémon for post-ko logic in certain circumstances. (pivot move kill, mega evolution kill..) 
- Fixed a bug where AI would see its dynamic type moves incorrectly. 
- Fixed a bug where AI would click moves randomly if its best move was disincentivized. 
- AI now sees Shield Dust on the player's Pokemon correctly.
- Fixed a bug where AI would see damaging setup moves as having both a negative and a positive effect. 
- Fixed a bug where AI would incorrectly evaluate self-speed dropping moves like Hammer Arm when checking if speed drop moves should prevent setup.
- AI now correctly recognizes when the player has Rapid Spin for moves with secondary hazard effects like Stone Axe.
- AI is now aware if its positive move effects are removed by Sheer Force when evaluating guaranteed and secondary effects.
- AI now correctly sees the effectiveness of its moves with status secondary effects when evaluating said secondary effects. 
- AI now sees Retaliate damage properly in every situation.
- AI no longer sees Parental Bond incorrectly applied to its damage calculations for spread moves in double battles.