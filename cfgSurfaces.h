class CfgSurfaces
{
	class Default{};
	class Water{};
	class Grass: Default
	{
		access = 2;
		files = "grass_*";
		character = "Grassy";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0.0;
		impact = "hitGroundSoft";
	};
	class Underwater: Default
	{
		access = 2;
		files = "underwater*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 1.25;
		grassCover = 0.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
	};
};

class CfgSurfaceCharacters
{
	class Grassy
	{
		probability[] = {0.5};
		names[] = {"Grass"};
	};
};