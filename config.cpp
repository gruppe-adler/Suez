#define _ARMA_

class CfgPatches
{
	class Suez
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Structures_F","A3_Map_Data"};
	};
};
class CfgVehicles{};
class CfgWorlds
{
	mapSize = 5120;
	mapZone = 35;
	mapArea[] = {32.315,30.4059,32.37,30.449};
	class DefaultWorld
	{
		class Weather
		{
			class Overcast;
		};
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class Suez: CAWorld
	{
		
		#include "cfgClutter.h"

		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 200;
			waterFogDistanceNear = 10;
			waterFogDistance = 40;
			waterColor[] = {0.04,0.16,0.22};
			deepWaterColor[] = {0.0,0.001,0.009};
			surfaceColor[] = {0.04,0.16,0.22};
			deepSurfaceColor[] = {0.0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		startWeather = 0.3;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;
		startFogBase = 0.0;
		forecastFogBase = 0.0;
		startFogDecay = 0.013;
		forecastFogDecay = 0.013;
		fogBeta0Min = 0.0;
		fogBeta0Max = 0.05;
		
		#include "lightning.cpp"
		
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		hazeBaseHeight = 150;
		hazeBaseBeta0 = 6e-005;
		hazeDensityDecay = 0.0006;
		horizonParallaxCoef = 0.045;
		horizonFogColorationStart = "0.8f";
		skyFogColorationStart = "0.7f";
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		skyObject = "A3\Map_Stratis\data\obloha.p3d";
		horizontObject = "A3\Map_Stratis\data\horizont.p3d";
		skyTexture = "A3\Map_Stratis\data\sky_semicloudy_sky.paa";
		skyTextureR = "A3\Map_Stratis\data\sky_semicloudy_lco.paa";
		access = 3;
		worldId = 1337;
		cutscenes[] = {""};
		description = "Tutorial Island";
		icon = "";
		worldName = "\Suez\Suez.wrp";
		pictureMap = "A3\map_Altis\data\pictureMap_ca.paa";
		pictureShot = "A3\map_Altis\data\ui_Altis_ca.paa";
		plateFormat = "A#$-####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		author = "CAPTNCAPS";
		mapSize = 20480;
		mapZone = 35;
		mapArea[] = {25.011957,39.718452,25.481527,40.094578};
		longitude = 16.661;
		latitude = -35.152;
		elevationOffset = 0;
		minHillsAltitude = 80;
		maxHillsAltitude = 200;
		envTexture = "A3\data_f\env_land_ca.paa";
		newRoadsShape = "\Suez\data\roads\roads.shp";
		class OutsideTerrain
		{
			satellite = "A3\map_Altis\data\s_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "A3\Map_Data\gdt_seabed_nopx.paa";
					texture = "A3\Map_Data\gdt_seabed_co.paa";
				};
			};
			colorOutside[] = {0.227451,0.27451,0.384314,1};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 30720;
			class Zoom1
			{
				zoomMax = 0.05;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.5;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		startTime = "12:00";
		startDate = "24/6/2035";
		centerPosition[] = {10801.9,10589.6,100};
		seagullPos[] = {15360,150.0,15360};
		ilsPosition[] = {9580,12102};
		ilsDirection[] = {-0.6947,0.08,-0.7193};
		ilsTaxiOff[] = {9580,12102, 10446,13036, 10449,13067, 10429,13106, 10391,13113, 10354,13097, 10221,12944};
		ilsTaxiIn[] = {10221,12944, 9597,12266, 9571,12215, 9588,12180, 9580,12102};

		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		clutterGrid = 1.2;
		clutterDist = 90;
		noDetailDist = 65;
		fullDetailDist = 10;
		midDetailTexture = "A3\Map_Data\middle_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
		class Ambient{};
		class AmbientA3
		{
			maxCost = 500;
			class Radius440_500
			{
				areaSpawnRadius = 70.0;
				areaMaxRadius = 200.0;
				spawnCircleRadius = 30.0;
				spawnInterval = 4.7;
				class Species
				{
					class Kestrel_random_F
					{
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night)";
						maxWorldCount = 5;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Seagull
					{
						maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
						maxWorldCount = 40;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Rabbit_F
					{
						maxCircleCount = "(20 * (0.1 - houses)) * (1 - sea)";
						maxWorldCount = 5;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 80;
						minAlt = -5;
					};
				};
			};
			class Radius40_60
			{
				areaSpawnRadius = 50.0;
				areaMaxRadius = 83.0;
				spawnCircleRadius = 10.0;
				spawnInterval = 1.5;
				class Species
				{
					class CatShark_F
					{
						maxCircleCount = "(4 * (WaterDepth interpolate [1,30,0,1]))";
						maxWorldCount = 10;
						cost = 6;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 10;
						minAlt = -80;
					};
					class Turtle_F
					{
						maxCircleCount = "(2 * (waterDepth interpolate [1,16,0,1]) * ((1-houses) * (1-houses)))";
						maxWorldCount = 6;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 10;
						minAlt = -80;
					};
					class Snake_random_F
					{
						maxCircleCount = "(1 - houses) * ((2 * (1 - sea)) + (2 * (meadow)))";
						maxWorldCount = 3;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 5;
						maxAlt = 40;
						minAlt = -5;
					};
					class Salema_F
					{
						maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 40;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Ornate_random_F
					{
						maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.05))";
						maxWorldCount = 30;
						cost = 5;
						spawnCount = 3;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mackerel_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mullet_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Tuna_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) - 0.2))";
						maxWorldCount = 10;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
				};
			};
			class Radius30_40
			{
				areaSpawnRadius = 30.0;
				areaMaxRadius = 40.0;
				spawnCircleRadius = 3.0;
				spawnInterval = 3.75;
				class Species
				{
					class DragonFly
					{
						maxCircleCount = "4 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * sea * (1 - windy)";
						maxWorldCount = 4;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class ButterFly_random
					{
						maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FireFly
					{
						maxCircleCount = "(6 * night) * (1 - sea) * (1 - houses) * (1 - windy)";
						maxWorldCount = 20;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 3;
						maxAlt = 30;
						minAlt = -5;
					};
					class Cicada
					{
						maxCircleCount = "(4 * night) * (1 - sea) * (1 - windy)";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 3;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius15_20
			{
				areaSpawnRadius = 15.0;
				areaMaxRadius = 20.0;
				spawnCircleRadius = 2.0;
				spawnInterval = 2.85;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf1
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf2
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf3
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPollen1
					{
						maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPaper1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPlastic1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius = 6.0;
				areaMaxRadius = 10.0;
				spawnCircleRadius = 1.0;
				spawnInterval = 0.1;
				class Species
				{
					class HoneyBee
					{
						maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy)";
						maxWorldCount = 8;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class HouseFly
					{
						maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class Mosquito
					{
						maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
		};
		class Names
		{
			#include "Suez.hpp"
		};
		safePositionAnchor[] = {15667,15791.3};
		safePositionRadius = 7000;
		loadingTexts[] = {"This is an Altis remake", "It isn't very good", "It was a tutorial"};
	};
};
class CfgWorldList
{
	class Suez{};
};
#include "cfgSurfaces.h"
