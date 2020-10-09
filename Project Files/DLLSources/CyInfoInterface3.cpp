#include "CvGameCoreDLL.h"
#include "CvInfos.h"
//
// Python interface for info classes (formerly structs)
// These are simple enough to be exposed directly - no wrappers
//
void CyInfoPythonInterface3()
{
	OutputDebugString("Python Extension Module - CyInfoPythonInterface3\n");
	python::class_<CvYieldInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvYieldInfo")
		.def("getChar", &CvYieldInfo::getChar, "int ()")
		.def("getIcon", &CvYieldInfo::getIcon, "string ()")
		.def("getWikiWidget", &CvYieldInfo::getWikiWidget, "")
		.def("getID", &CvYieldInfo::getID, "")
// KJ Jansson addon for Multiple Professions per Building modcomp by Androrc the Orc START
		.def("getCombiIcon", &CvYieldInfo::getCombiIcon, "string ()")
// KJ Jansson addon for Multiple Professions per Building modcomp by Androrc the Orc END
		.def("getHighlightIcon", &CvYieldInfo::getHighlightIcon, "string ()")
		.def("getBuyPriceLow", &CvYieldInfo::getBuyPriceLow, "int ()")
		.def("getBuyPriceHigh", &CvYieldInfo::getBuyPriceHigh, "int ()")
		.def("getSellPriceDifference", &CvYieldInfo::getSellPriceDifference, "int ()")
		// R&R, ray, Africa
		.def("getPortRoyalBuyPriceLow", &CvYieldInfo::getPortRoyalBuyPriceLow, "int ()")
		.def("getPortRoyalBuyPriceHigh", &CvYieldInfo::getPortRoyalBuyPriceHigh, "int ()")
		.def("getPortRoyalSellPriceDifference", &CvYieldInfo::getPortRoyalSellPriceDifference, "int ()")
		// R&R, ray, Africa - END
		// R&R, ray, Port Royal
		.def("getAfricaBuyPriceLow", &CvYieldInfo::getAfricaBuyPriceLow, "int ()")
		.def("getAfricaBuyPriceHigh", &CvYieldInfo::getAfricaBuyPriceHigh, "int ()")
		.def("getAfricaSellPriceDifference", &CvYieldInfo::getAfricaSellPriceDifference, "int ()")
		// R&R, ray, Port Royal - END
		.def("getPriceChangeThreshold", &CvYieldInfo::getPriceChangeThreshold, "int ()")
		.def("getPriceCorrectionPercent", &CvYieldInfo::getPriceCorrectionPercent, "int ()")
		.def("getNativeBuyPrice", &CvYieldInfo::getNativeBuyPrice, "int ()")
		.def("getNativeSellPrice", &CvYieldInfo::getNativeSellPrice, "int ()")
		.def("getNativeConsumptionPercent", &CvYieldInfo::getNativeConsumptionPercent, "int ()")
		.def("getNativeHappy", &CvYieldInfo::getNativeHappy, "int ()")
		.def("getHillsChange", &CvYieldInfo::getHillsChange, "int ()")
		.def("getPeakChange", &CvYieldInfo::getPeakChange, "int ()")
		.def("getLakeChange", &CvYieldInfo::getLakeChange, "int ()")
		.def("getCityChange", &CvYieldInfo::getCityChange, "int ()")
		.def("getMinCity", &CvYieldInfo::getMinCity, "int ()")
		.def("getAIWeightPercent", &CvYieldInfo::getAIWeightPercent, "int ()")
		.def("getAIBaseValue", &CvYieldInfo::getAIBaseValue, "int ()")
		.def("getNativeBaseValue", &CvYieldInfo::getNativeBaseValue, "int ()")
		.def("getColorType", &CvYieldInfo::getColorType, "int ()")
		.def("getUnitClass", &CvYieldInfo::getUnitClass, "int ()")
		.def("getTextureIndex", &CvYieldInfo::getTextureIndex, "int ()")
		.def("getWaterTextureIndex", &CvYieldInfo::getWaterTextureIndex, "int ()")
		.def("getPowerValue", &CvYieldInfo::getPowerValue, "int ()")
		.def("getAssetValue", &CvYieldInfo::getAssetValue, "int ()")
		.def("isCargo", &CvYieldInfo::isCargo, "bool ()")
		;
	python::class_<CvTerrainInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvTerrainInfo")
		.def("getMovementCost", &CvTerrainInfo::getMovementCost, "int ()")
		.def("getSeeFromLevel", &CvTerrainInfo::getSeeFromLevel, "int ()")
		.def("getSeeThroughLevel", &CvTerrainInfo::getSeeThroughLevel, "int ()")
		.def("getBuildModifier", &CvTerrainInfo::getBuildModifier, "int ()")
		.def("getDefenseModifier", &CvTerrainInfo::getDefenseModifier, "int ()")
		.def("isWater", &CvTerrainInfo::isWater, "bool ()")
		.def("isImpassable", &CvTerrainInfo::isImpassable, "bool ()")
		.def("isFound", &CvTerrainInfo::isFound, "bool ()")
		.def("isFoundCoast", &CvTerrainInfo::isFoundCoast, "bool ()")
		// Arrays
		.def("getYield", &CvTerrainInfo::getYield, "int (int i)")
		.def("getRiverYieldIncrease", &CvTerrainInfo::getRiverYieldIncrease, "int (int i)")
		;
	// CvInterfaceModeInfo
	python::class_<CvInterfaceModeInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvInterfaceModeInfo")
		.def("getCursorIndex", &CvInterfaceModeInfo::getCursorIndex, "int ()")
		.def("getMissionType", &CvInterfaceModeInfo::getMissionType, "int ()")
		.def("getVisible", &CvInterfaceModeInfo::getVisible, "bool ()")
		.def("getGotoPlot", &CvInterfaceModeInfo::getGotoPlot, "bool ()")
		.def("getHighlightPlot", &CvInterfaceModeInfo::getHighlightPlot, "bool ()")
		.def("getSelectType", &CvInterfaceModeInfo::getSelectType, "bool ()")
		.def("getSelectAll", &CvInterfaceModeInfo::getSelectAll, "bool ()")
		.def("isAltDown", &CvInterfaceModeInfo::isAltDown, "bool ()")
		.def("isShiftDown", &CvInterfaceModeInfo::isShiftDown, "bool ()")
		.def("isCtrlDown", &CvInterfaceModeInfo::isCtrlDown, "bool ()")
		.def("isAltDownAlt", &CvInterfaceModeInfo::isAltDownAlt, "bool ()")
		.def("isShiftDownAlt", &CvInterfaceModeInfo::isShiftDownAlt, "bool ()")
		.def("isCtrlDownAlt", &CvInterfaceModeInfo::isCtrlDownAlt, "bool ()")
		;
	python::class_<CvLeaderHeadInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvLeaderHeadInfo")
		.def("getBaseAttitude", &CvLeaderHeadInfo::getBaseAttitude, "int ()")
		.def("getNativeAttitude", &CvLeaderHeadInfo::getNativeAttitude, "int ()")
		.def("getRefuseToTalkWarThreshold", &CvLeaderHeadInfo::getRefuseToTalkWarThreshold, "int ()")
		.def("getMaxGoldTradePercent", &CvLeaderHeadInfo::getMaxGoldTradePercent, "int ()")
		.def("getMaxWarRand", &CvLeaderHeadInfo::getMaxWarRand, "int ()")
		.def("getMaxWarNearbyPowerRatio", &CvLeaderHeadInfo::getMaxWarNearbyPowerRatio, "int ()")
		.def("getMaxWarDistantPowerRatio", &CvLeaderHeadInfo::getMaxWarDistantPowerRatio, "int ()")
		.def("getMaxWarMinAdjacentLandPercent", &CvLeaderHeadInfo::getMaxWarMinAdjacentLandPercent, "int ()")
		.def("getLimitedWarRand", &CvLeaderHeadInfo::getLimitedWarRand, "int ()")
		.def("getLimitedWarPowerRatio", &CvLeaderHeadInfo::getLimitedWarPowerRatio, "int ()")
		.def("getDogpileWarRand", &CvLeaderHeadInfo::getDogpileWarRand, "int ()")
		.def("getMakePeaceRand", &CvLeaderHeadInfo::getMakePeaceRand, "int ()")
		.def("getDeclareWarTradeRand", &CvLeaderHeadInfo::getDeclareWarTradeRand, "int ()")
		.def("getDemandRebukedSneakProb", &CvLeaderHeadInfo::getDemandRebukedSneakProb, "int ()")
		.def("getDemandRebukedWarProb", &CvLeaderHeadInfo::getDemandRebukedWarProb, "int ()")
		.def("getRazeCityProb", &CvLeaderHeadInfo::getRazeCityProb, "int ()")
		.def("getBaseAttackOddsChange", &CvLeaderHeadInfo::getBaseAttackOddsChange, "int ()")
		.def("getAttackOddsChangeRand", &CvLeaderHeadInfo::getAttackOddsChangeRand, "int ()")
		.def("getCloseBordersAttitudeChange", &CvLeaderHeadInfo::getCloseBordersAttitudeChange, "int ()")
		.def("getAlarmAttitudeChange", &CvLeaderHeadInfo::getAlarmAttitudeChange, "int ()")
		.def("getLostWarAttitudeChange", &CvLeaderHeadInfo::getLostWarAttitudeChange, "int ()")
		.def("getRebelAttitudeDivisor", &CvLeaderHeadInfo::getRebelAttitudeDivisor, "int ()")
		.def("getAtWarAttitudeDivisor", &CvLeaderHeadInfo::getAtWarAttitudeDivisor, "int ()")
		.def("getAtWarAttitudeChangeLimit", &CvLeaderHeadInfo::getAtWarAttitudeChangeLimit, "int ()")
		.def("getAtPeaceAttitudeDivisor", &CvLeaderHeadInfo::getAtPeaceAttitudeDivisor, "int ()")
		.def("getAtPeaceAttitudeChangeLimit", &CvLeaderHeadInfo::getAtPeaceAttitudeChangeLimit, "int ()")
		.def("getOpenBordersAttitudeDivisor", &CvLeaderHeadInfo::getOpenBordersAttitudeDivisor, "int ()")
		.def("getOpenBordersAttitudeChangeLimit", &CvLeaderHeadInfo::getOpenBordersAttitudeChangeLimit, "int ()")
		.def("getDefensivePactAttitudeDivisor", &CvLeaderHeadInfo::getDefensivePactAttitudeDivisor, "int ()")
		.def("getDefensivePactAttitudeChangeLimit", &CvLeaderHeadInfo::getDefensivePactAttitudeChangeLimit, "int ()")
		.def("getShareWarAttitudeChange", &CvLeaderHeadInfo::getShareWarAttitudeChange, "int ()")
		.def("getShareWarAttitudeDivisor", &CvLeaderHeadInfo::getShareWarAttitudeDivisor, "int ()")
		.def("getShareWarAttitudeChangeLimit", &CvLeaderHeadInfo::getShareWarAttitudeChangeLimit, "int ()")
		.def("getDemandTributeAttitudeThreshold", &CvLeaderHeadInfo::getDemandTributeAttitudeThreshold, "int ()")
		.def("getNoGiveHelpAttitudeThreshold", &CvLeaderHeadInfo::getNoGiveHelpAttitudeThreshold, "int ()")
		.def("getMapRefuseAttitudeThreshold", &CvLeaderHeadInfo::getMapRefuseAttitudeThreshold, "int ()")
		.def("getDeclareWarRefuseAttitudeThreshold", &CvLeaderHeadInfo::getDeclareWarRefuseAttitudeThreshold, "int ()")
		.def("getDeclareWarThemRefuseAttitudeThreshold", &CvLeaderHeadInfo::getDeclareWarThemRefuseAttitudeThreshold, "int ()")
		.def("getStopTradingRefuseAttitudeThreshold", &CvLeaderHeadInfo::getStopTradingRefuseAttitudeThreshold, "int ()")
		.def("getStopTradingThemRefuseAttitudeThreshold", &CvLeaderHeadInfo::getStopTradingThemRefuseAttitudeThreshold, "int ()")
		.def("getOpenBordersRefuseAttitudeThreshold", &CvLeaderHeadInfo::getOpenBordersRefuseAttitudeThreshold, "int ()")
		.def("getDefensivePactRefuseAttitudeThreshold", &CvLeaderHeadInfo::getDefensivePactRefuseAttitudeThreshold, "int ()")
		.def("getPermanentAllianceRefuseAttitudeThreshold", &CvLeaderHeadInfo::getPermanentAllianceRefuseAttitudeThreshold, "int ()")
		// R&R, ray, Natives raiding party - START
		.def("getNativeRaidAttitudeThreshold", &CvLeaderHeadInfo::getNativeRaidAttitudeThreshold, "int ()")
		// R&R, ray, Natives raiding party - END
		.def("getArtDefineTag", &CvLeaderHeadInfo::getArtDefineTag, "string ()")
		// Arrays
		.def("hasTrait", &CvLeaderHeadInfo::hasTrait, "bool (int i)")
		.def("getContactRand", &CvLeaderHeadInfo::getContactRand, "int (int i)")
		.def("getContactDelay", &CvLeaderHeadInfo::getContactDelay, "int (int i)")
		.def("getMemoryDecayRand", &CvLeaderHeadInfo::getMemoryDecayRand, "int (int i)")
		.def("getMemoryAttitudePercent", &CvLeaderHeadInfo::getMemoryAttitudePercent, "int (int i)")
		.def("getNoWarAttitudeProb", &CvLeaderHeadInfo::getNoWarAttitudeProb, "int (int i)")
		.def("getUnitAIWeightModifier", &CvLeaderHeadInfo::getUnitAIWeightModifier, "int (int i)")
		.def("getImprovementWeightModifier", &CvLeaderHeadInfo::getImprovementWeightModifier, "int (int i)")
		.def("getDiploPeaceMusicScriptIds", &CvLeaderHeadInfo::getDiploPeaceMusicScriptIds, "int (int i)")
		.def("getDiploWarMusicScriptIds", &CvLeaderHeadInfo::getDiploWarMusicScriptIds, "int (int i)")
		// Other
		.def("getLeaderHead", &CvLeaderHeadInfo::getLeaderHead, "string ()")
		.def("getButton", &CvLeaderHeadInfo::getButton, "string ()")
		;
	python::class_<CvTraitInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvTraitInfo")
		.def("getLevelExperienceModifier", &CvTraitInfo::getLevelExperienceModifier, "int ()")
		.def("getGreatGeneralRateModifier", &CvTraitInfo::getGreatGeneralRateModifier, "int ()")
		.def("getDomesticGreatGeneralRateModifier", &CvTraitInfo::getDomesticGreatGeneralRateModifier, "int ()")
		.def("getNativeAngerModifier", &CvTraitInfo::getNativeAngerModifier, "int ()")
		.def("getLearnTimeModifier", &CvTraitInfo::getLearnTimeModifier, "int ()")
		.def("getNativeCombatModifier", &CvTraitInfo::getNativeCombatModifier, "int ()")
		.def("getMissionaryModifier", &CvTraitInfo::getMissionaryModifier, "int ()")
		.def("getNativeTradeModifier", &CvTraitInfo::getNativeTradeModifier, "int ()") // R&R, ray, new Attribute in Traits 
		.def("getRebelCombatModifier", &CvTraitInfo::getRebelCombatModifier, "int ()")
		.def("getTaxRateThresholdModifier", &CvTraitInfo::getTaxRateThresholdModifier, "int ()")
		.def("getMaxTaxRateThresholdDecrease", &CvTraitInfo::getMaxTaxRateThresholdDecrease, "int ()") // R&R, ray, new Attribute in Traits 
		.def("getMercantileFactor", &CvTraitInfo::getMercantileFactor, "int ()")
		.def("getTreasureModifier", &CvTraitInfo::getTreasureModifier, "int ()")
		.def("getChiefGoldModifier", &CvTraitInfo::getChiefGoldModifier, "int ()")
		.def("getShortDescription", &CvTraitInfo::getShortDescription, "int (int i)")
		.def("getCityExtraYield", &CvTraitInfo::getCityExtraYield, "int (int i)")
		.def("getExtraYieldThreshold", &CvTraitInfo::getExtraYieldThreshold, "int (int i)")
		.def("getProfessionEquipmentModifier", &CvTraitInfo::getProfessionEquipmentModifier, "int (int i)")
		.def("isFreePromotion", &CvTraitInfo::isFreePromotion, "int (int i)")
		.def("getNativeAttitudeChange", &CvTraitInfo::getNativeAttitudeChange, "int ()")
		.def("getEuropeanAttitudeChange", &CvTraitInfo::getEuropeanAttitudeChange, "int ()") // R&R, ray, new Attribute in Traits 
		.def("getKingAttitudeChange", &CvTraitInfo::getKingAttitudeChange, "int ()") // R&R, ray, new Attribute in Traits 
		.def("getCityDefense", &CvTraitInfo::getCityDefense, "int ()")
		.def("getLandPriceDiscount", &CvTraitInfo::getLandPriceDiscount, "int ()")
		.def("getRecruitPriceDiscount", &CvTraitInfo::getRecruitPriceDiscount, "int ()")
		.def("getEuropeTravelTimeModifier", &CvTraitInfo::getEuropeTravelTimeModifier, "int ()")
		.def("getImmigrationThresholdModifier", &CvTraitInfo::getImmigrationThresholdModifier, "int ()")
		.def("getPopGrowthThresholdModifier", &CvTraitInfo::getPopGrowthThresholdModifier, "int ()")		// Schmiddie, 7 new variables for traits for Europeans, START
		.def("getCultureLevelModifier", &CvTraitInfo::getCultureLevelModifier, "int ()")
		.def("getPioneerSpeedModifier", &CvTraitInfo::getPioneerSpeedModifier, "int ()")
		.def("getImprovementPriceModifier", &CvTraitInfo::getImprovementPriceModifier, "int ()")
		.def("getLearningByDoingModifier", &CvTraitInfo::getLearningByDoingModifier, "int ()")
		.def("getSpecialistPriceModifier", &CvTraitInfo::getSpecialistPriceModifier, "int ()")
		.def("getStorageCapacityModifier", &CvTraitInfo::getStorageCapacityModifier, "int ()")		// Schmiddie, 7 new variables for traits for Europeans, END
		.def("getYieldModifier", &CvTraitInfo::getYieldModifier, "int (int)")
		.def("getGoodyFactor", &CvTraitInfo::getGoodyFactor, "int (int)")
		.def("getBuildingProductionModifier", &CvTraitInfo::getBuildingProductionModifier, "int (int)")
		.def("getBuildingRequiredYieldModifier", &CvTraitInfo::getBuildingRequiredYieldModifier, "int (int)")
		.def("getUnitMoveChange", &CvTraitInfo::getUnitMoveChange, "int (int)")
		.def("getUnitStrengthModifier", &CvTraitInfo::getUnitStrengthModifier, "int (int)")
		.def("getProfessionMoveChange", &CvTraitInfo::getProfessionMoveChange, "int (int)")
		.def("isTaxYieldModifier", &CvTraitInfo::isTaxYieldModifier, "bool (int)")
		.def("getBuildingYieldChange", &CvTraitInfo::getBuildingYieldChange, "int (int iBuildingClass, int iYieldType)")
		.def("isFreeBuildingClass", &CvTraitInfo::isFreeBuildingClass, "bool (int)")
		;
	// CvWorldInfo
	python::class_<CvWorldInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvWorldInfo")
		.def("getDefaultPlayers", &CvWorldInfo::getDefaultPlayers, "int ()")
		.def("getDefaultNativePlayers", &CvWorldInfo::getDefaultNativePlayers, "int ()")
		.def("getUnitNameModifier", &CvWorldInfo::getUnitNameModifier, "int ()")
		.def("getTargetNumCities", &CvWorldInfo::getTargetNumCities, "int ()")
		.def("getBuildingClassPrereqModifier", &CvWorldInfo::getBuildingClassPrereqModifier, "int ()")
		.def("getGridWidth", &CvWorldInfo::getGridWidth, "int ()")
		.def("getGridHeight", &CvWorldInfo::getGridHeight, "int ()")
		.def("getTerrainGrainChange", &CvWorldInfo::getTerrainGrainChange, "int ()")
		.def("getFeatureGrainChange", &CvWorldInfo::getFeatureGrainChange, "int ()")
		.def("getFatherPercent", &CvWorldInfo::getFatherPercent, "int ()")
		;
	python::class_<CvClimateInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvClimateInfo")
		.def("getDesertPercentChange", &CvClimateInfo::getDesertPercentChange, "int ()")
		.def("getJungleLatitude", &CvClimateInfo::getJungleLatitude, "int ()")
		.def("getHillRange", &CvClimateInfo::getHillRange, "int ()")
		.def("getPeakPercent", &CvClimateInfo::getPeakPercent, "int ()")
		.def("getSnowLatitudeChange", &CvClimateInfo::getSnowLatitudeChange, "float ()")
		.def("getTundraLatitudeChange", &CvClimateInfo::getTundraLatitudeChange, "float ()")
		.def("getGrassLatitudeChange", &CvClimateInfo::getGrassLatitudeChange, "float ()")
		.def("getDesertBottomLatitudeChange", &CvClimateInfo::getDesertBottomLatitudeChange, "float ()")
		.def("getDesertTopLatitudeChange", &CvClimateInfo::getDesertTopLatitudeChange, "float ()")
		.def("getRandIceLatitude", &CvClimateInfo::getRandIceLatitude, "float ()")
		;
	python::class_<CvSeaLevelInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvSeaLevelInfo")
		.def("getSeaLevelChange", &CvSeaLevelInfo::getSeaLevelChange, "int ()")
		;
	python::class_<CvEuropeInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvEuropeInfo")
		.def("isStart", &CvEuropeInfo::isStart, "bool ()")
		.def("getCardinalDirection", &CvEuropeInfo::getCardinalDirection, "int ()")
		.def("getTripLength", &CvEuropeInfo::getTripLength, "int ()")
		.def("getMinLandDistance", &CvEuropeInfo::getMinLandDistance, "int ()")
		.def("getWidthPercent", &CvEuropeInfo::getWidthPercent, "int ()")
		;
	python::class_<CvAssetInfoBase, boost::noncopyable>("CvAssetInfoBase")
		.def("setTag", &CvAssetInfoBase::setTag, "void (string)")
		.def("getTag", &CvAssetInfoBase::getTag, "string ()")
		.def("setPath", &CvAssetInfoBase::setPath, "void (string)")
		.def("getPath", &CvAssetInfoBase::getPath, "string ()")
		;
	python::class_<CvArtInfoAsset, boost::noncopyable, python::bases<CvAssetInfoBase> >("CvArtInfoAsset")
		.def("getButton", &CvArtInfoAsset::getButton, "string ()")
		.def("setNIF", &CvArtInfoAsset::setNIF, "void (string)")
		.def("getNIF", &CvArtInfoAsset::getNIF, "string ()")
		.def("setKFM", &CvArtInfoAsset::setKFM, "void (string)")
		.def("getKFM", &CvArtInfoAsset::getKFM, "string ()")
		;
	python::class_<CvArtInfoScalableAsset, boost::noncopyable, python::bases<CvArtInfoAsset, CvScalableInfo> >("CvArtInfoScalableAsset")
		;
	python::class_<CvArtInfoInterface, boost::noncopyable, python::bases<CvArtInfoAsset> >("CvArtInfoInterface")
		;
	python::class_<CvArtInfoMovie, boost::noncopyable, python::bases<CvArtInfoAsset> >("CvArtInfoMovie")
		;
	python::class_<CvArtInfoMisc, boost::noncopyable, python::bases<CvArtInfoAsset> >("CvArtInfoMisc")
		;
	python::class_<CvArtInfoUnit, boost::noncopyable, python::bases<CvArtInfoScalableAsset> >("CvArtInfoUnit")
		.def("getInterfaceScale", &CvArtInfoUnit::getInterfaceScale, "float ()")
		.def("getKFM", &CvArtInfoUnit::getKFM, "string ()")
		.def("getFullLengthIcon", &CvArtInfoUnit::getFullLengthIcon, "string ()")
		;
	python::class_<CvArtInfoBuilding, boost::noncopyable, python::bases<CvArtInfoScalableAsset> >("CvArtInfoBuilding")
		.def("isAnimated", &CvArtInfoBuilding::isAnimated, "bool ()")
		.def("getCityTexture", &CvArtInfoBuilding::getCityTexture, "string ()")
		.def("getCitySelectedTexture", &CvArtInfoBuilding::getCitySelectedTexture, "string ()")
		;
	python::class_<CvArtInfoCivilization, boost::noncopyable, python::bases<CvArtInfoAsset> >("CvArtInfoCivilization")
		.def("getFontButtonIndex", &CvArtInfoCivilization::getFontButtonIndex, "int ()")
		.def("isWhiteFlag", &CvArtInfoCivilization::isWhiteFlag, "bool ()")
		.def("isInvertFlag", &CvArtInfoCivilization::isInvertFlag, "bool ()")
		;
	python::class_<CvArtInfoLeaderhead, boost::noncopyable, python::bases<CvArtInfoAsset> >("CvArtInfoLeaderhead")
		;
	python::class_<CvArtInfoBonus, boost::noncopyable, python::bases<CvArtInfoScalableAsset> >("CvArtInfoBonus")
		;
	python::class_<CvArtInfoImprovement, boost::noncopyable, python::bases<CvArtInfoScalableAsset> >("CvArtInfoImprovement")
		.def("isExtraAnimations", &CvArtInfoImprovement::isExtraAnimations, "bool ()")
		;
	python::class_<CvArtInfoTerrain, boost::noncopyable, python::bases<CvArtInfoAsset> >("CvArtInfoTerrain")
		;
	python::class_<CvArtInfoFeature, boost::noncopyable, python::bases<CvArtInfoScalableAsset> >("CvArtInfoFeature")
		.def("isAnimated", &CvArtInfoFeature::isAnimated, "bool ()")
		;
	python::class_<CvEmphasizeInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvEmphasizeInfo")
		.def("isAvoidGrowth", &CvEmphasizeInfo::isAvoidGrowth, "bool ()")
		// Arrays
		.def("getYieldChange", &CvEmphasizeInfo::getYieldChange, "int (int i)")
		;
	python::class_<CvCultureLevelInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvCultureLevelInfo")
		.def("getThreshold", &CvCultureLevelInfo::getThreshold, "int ()")
		;
	python::class_<CvEraInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvEraInfo")
		.def("getGameTurn", &CvEraInfo::getGameTurn, "int () -")
		.def("getStartingUnitMultiplier", &CvEraInfo::getStartingUnitMultiplier, "int () -")
		.def("getStartingDefenseUnits", &CvEraInfo::getStartingDefenseUnits, "int () -")
		.def("getStartingWorkerUnits", &CvEraInfo::getStartingWorkerUnits, "int () -")
		.def("getStartingExploreUnits", &CvEraInfo::getStartingExploreUnits, "int () -")
		.def("getStartingGold", &CvEraInfo::getStartingGold, "int () -")
		.def("getFreePopulation", &CvEraInfo::getFreePopulation, "int () -")
		.def("getStartPercent", &CvEraInfo::getStartPercent, "int () -")
		.def("getGrowthPercent", &CvEraInfo::getGrowthPercent, "int () -")
		.def("getTrainPercent", &CvEraInfo::getTrainPercent, "int () -")
		.def("getConstructPercent", &CvEraInfo::getConstructPercent, "int () -")
		.def("getFatherPercent", &CvEraInfo::getFatherPercent, "int () -")
		.def("getGreatGeneralPercent", &CvEraInfo::getGreatGeneralPercent, "int () -")
		.def("getEventChancePerTurn", &CvEraInfo::getEventChancePerTurn, "int () -")
		.def("getSoundtrackSpace", &CvEraInfo::getSoundtrackSpace, "int () -")
		.def("isFirstSoundtrackFirst", &CvEraInfo::isFirstSoundtrackFirst, "int () -")
		.def("getNumSoundtracks", &CvEraInfo::getNumSoundtracks, "int () -")
		.def("getAudioUnitVictoryScript", &CvEraInfo::getAudioUnitVictoryScript, "string () -")
		.def("getAudioUnitDefeatScript", &CvEraInfo::getAudioUnitDefeatScript, "string () -")
		.def("isRevolution", &CvEraInfo::isRevolution, "bool () -")
		.def("isNoGoodies", &CvEraInfo::isNoGoodies, "bool () -")
		// Arrays
		.def("getSoundtracks", &CvEraInfo::getSoundtracks, "int (int i) -")
		.def("getCitySoundscapeSciptId", &CvEraInfo::getCitySoundscapeSciptId, "int (int i) -")
		;
	python::class_<CvColorInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvColorInfo")
		.def("getColor", &CvColorInfo::getColor,  python::return_value_policy<python::reference_existing_object>())
		;
	python::class_<CvPlayerColorInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvPlayerColorInfo")
		.def("getColorTypePrimary", &CvPlayerColorInfo::getColorTypePrimary, "int ()")
		.def("getColorTypeSecondary", &CvPlayerColorInfo::getColorTypeSecondary, "int ()")
		.def("getTextColorType", &CvPlayerColorInfo::getTextColorType, "int ()")
		;
	python::class_<CvGameText, boost::noncopyable, python::bases<CvInfoBase> >("CvGameText")
		.def("getText", &CvGameText::pyGetText, "wstring ()")
		.def("setText", &CvGameText::setText, "void (wstring)")
		.def("getNumLanguages", &CvGameText::getNumLanguages, "int ()")
		;
	python::class_<CvDiplomacyTextInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvDiplomacyTextInfo")
		.def("getResponse", &CvDiplomacyTextInfo::getResponse,  python::return_value_policy<python::reference_existing_object>(), "Response (int iNum)")
		.def("getNumResponses", &CvDiplomacyTextInfo::getNumResponses, "int ()")
		.def("getCivilizationTypes", &CvDiplomacyTextInfo::getCivilizationTypes, "bool (int i, int j)")
		.def("getLeaderHeadTypes", &CvDiplomacyTextInfo::getLeaderHeadTypes, "bool (int i, int j)")
		.def("getAttitudeTypes", &CvDiplomacyTextInfo::getAttitudeTypes, "bool (int i, int j)")
		.def("getDiplomacyPowerTypes", &CvDiplomacyTextInfo::getDiplomacyPowerTypes, "bool (int i, int j)")
		.def("getNumDiplomacyText", &CvDiplomacyTextInfo::getNumDiplomacyText, "int (int i)")
		.def("getDiplomacyText", &CvDiplomacyTextInfo::getDiplomacyText, "string (int i, int j)")
		;
	python::class_<CvDiplomacyInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvDiplomacyInfo")
		.def("getResponse", &CvDiplomacyInfo::getResponse,  python::return_value_policy<python::reference_existing_object>(), "CvDiplomacyResponse (int iNum)")
		.def("getNumResponses", &CvDiplomacyInfo::getNumResponses, "int ()")
		.def("getCivilizationTypes", &CvDiplomacyInfo::getCivilizationTypes, "bool (int i, int j)")
		.def("getLeaderHeadTypes", &CvDiplomacyInfo::getLeaderHeadTypes, "bool (int i, int j)")
		.def("getAttitudeTypes", &CvDiplomacyInfo::getAttitudeTypes, "bool (int i, int j)")
		.def("getDiplomacyPowerTypes", &CvDiplomacyInfo::getDiplomacyPowerTypes, "bool (int i, int j)")
		.def("getNumDiplomacyText", &CvDiplomacyInfo::getNumDiplomacyText, "int (int i)")
		.def("getDiplomacyText", &CvDiplomacyInfo::getDiplomacyText, "string (int i, int j)")
		;
	python::class_<CvEffectInfo, boost::noncopyable, python::bases<CvInfoBase, CvScalableInfo> >("CvEffectInfo")
		.def("getPath", &CvEffectInfo::getPath, "string ()")
		.def("setPath", &CvEffectInfo::setPath, "void (string)")
		;
	python::class_<CvControlInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvControlInfo")
		.def("getActionInfoIndex", &CvControlInfo::getActionInfoIndex, "int ()")
		;
	python::class_<CvAutomateInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvAutomateInfo")
		;
	python::class_<CvCommandInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvCommandInfo")
		;
	python::class_<CvGameOptionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvGameOptionInfo")
		.def("getDefault", &CvGameOptionInfo::getDefault, "bool ()")
		.def("getVisible", &CvGameOptionInfo::getVisible, "bool ()")
		;
	python::class_<CvMPOptionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvMPOptionInfo")
		.def("getDefault", &CvMPOptionInfo::getDefault, "bool ()")
		;
	python::class_<CvForceControlInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvForceControlInfo")
		.def("getDefault", &CvForceControlInfo::getDefault, "bool ()")
		;
	python::class_<CvPlayerOptionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvPlayerOptionInfo")
		.def("getDefault", &CvPlayerOptionInfo::getDefault, "bool ()")
		;
	python::class_<CvGraphicOptionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvGraphicOptionInfo")
		.def("getDefault", &CvGraphicOptionInfo::getDefault, "bool ()")
		;
	python::class_<CvEventTriggerInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvEventTriggerInfo")
		.def("getPercentGamesActive", &CvEventTriggerInfo::getPercentGamesActive, "int ()")
		.def("getProbability", &CvEventTriggerInfo::getProbability, "int ()")
		.def("getNumUnits", &CvEventTriggerInfo::getNumUnits, "int ()")
		.def("getNumBuildings", &CvEventTriggerInfo::getNumBuildings, "int ()")
		.def("getNumUnitsGlobal", &CvEventTriggerInfo::getNumUnitsGlobal, "int ()")
		.def("getNumBuildingsGlobal", &CvEventTriggerInfo::getNumBuildingsGlobal, "int ()")
		.def("getNumPlotsRequired", &CvEventTriggerInfo::getNumPlotsRequired, "int ()")
		.def("getPlotsType", &CvEventTriggerInfo::getPlotType, "int ()")
		.def("getOtherPlayerShareBorders", &CvEventTriggerInfo::getOtherPlayerShareBorders, "int ()")
		.def("getCityFoodWeight", &CvEventTriggerInfo::getCityFoodWeight, "int ()")
		.def("getCivic", &CvEventTriggerInfo::getCivic, "int ()")
		.def("getMinPopulation", &CvEventTriggerInfo::getMinPopulation, "int ()")
		.def("getMaxPopulation", &CvEventTriggerInfo::getMaxPopulation, "int ()")
		.def("getMinMapLandmass", &CvEventTriggerInfo::getMinMapLandmass, "int ()")
		.def("getMinOurLandmass", &CvEventTriggerInfo::getMinOurLandmass, "int ()")
		.def("getMaxOurLandmass", &CvEventTriggerInfo::getMaxOurLandmass, "int ()")
		.def("getMinDifficulty", &CvEventTriggerInfo::getMinDifficulty, "int ()")
		.def("getUnitDamagedWeight", &CvEventTriggerInfo::getUnitDamagedWeight, "int ()")
		.def("getUnitDistanceWeight", &CvEventTriggerInfo::getUnitDistanceWeight, "int ()")
		.def("getUnitExperienceWeight", &CvEventTriggerInfo::getUnitExperienceWeight, "int ()")
		.def("getMinTreasury", &CvEventTriggerInfo::getMinTreasury, "int ()")
		.def("getUnitRequired", &CvEventTriggerInfo::getUnitRequired, "int (int)")
		.def("getNumUnitsRequired", &CvEventTriggerInfo::getNumUnitsRequired, "int ()")
		.def("getBuildingRequired", &CvEventTriggerInfo::getBuildingRequired, "int (int)")
		.def("getNumBuildingsRequired", &CvEventTriggerInfo::getNumBuildingsRequired, "int ()")
		.def("getEvent", &CvEventTriggerInfo::getEvent, "int (int)")
		.def("getNumEvents", &CvEventTriggerInfo::getNumEvents, "int ()")
		.def("getPrereqEvent", &CvEventTriggerInfo::getPrereqEvent, "int (int)")
		.def("getNumPrereqEvents", &CvEventTriggerInfo::getNumPrereqEvents, "int ()")
		.def("getFeatureRequired", &CvEventTriggerInfo::getFeatureRequired, "int (int)")
		.def("getNumFeaturesRequired", &CvEventTriggerInfo::getNumFeaturesRequired, "int ()")
		.def("getTerrainRequired", &CvEventTriggerInfo::getTerrainRequired, "int (int)")
		.def("getNumTerrainsRequired", &CvEventTriggerInfo::getNumTerrainsRequired, "int ()")
		.def("getImprovementRequired", &CvEventTriggerInfo::getImprovementRequired, "int (int)")
		.def("getNumImprovementsRequired", &CvEventTriggerInfo::getNumImprovementsRequired, "int ()")
		.def("getRouteRequired", &CvEventTriggerInfo::getRouteRequired, "int (int)")
		.def("getNumRoutesRequired", &CvEventTriggerInfo::getNumRoutesRequired, "int ()")
		.def("isTutorial", &CvEventTriggerInfo::isTutorial, "bool ()")
		.def("isSinglePlayer", &CvEventTriggerInfo::isSinglePlayer, "bool ()")
		.def("isTeam", &CvEventTriggerInfo::isTeam, "bool ()")
		.def("isRecurring", &CvEventTriggerInfo::isRecurring, "bool ()")
		.def("isGlobal", &CvEventTriggerInfo::isGlobal, "bool ()")
		.def("isPickPlayer", &CvEventTriggerInfo::isPickPlayer, "bool ()")
		.def("isOtherPlayerAI", &CvEventTriggerInfo::isOtherPlayerAI, "bool ()")
		.def("isOtherPlayerNative", &CvEventTriggerInfo::isOtherPlayerNative, "bool ()")
		.def("isOtherPlayerPlayable", &CvEventTriggerInfo::isOtherPlayerPlayable, "bool ()")
		.def("isPickCity", &CvEventTriggerInfo::isPickCity, "bool ()")
		.def("isPickOtherPlayerCity", &CvEventTriggerInfo::isPickCity, "bool ()")
		.def("isUnitsOnPlot", &CvEventTriggerInfo::isUnitsOnPlot, "bool ()")
		.def("isOwnPlot", &CvEventTriggerInfo::isOwnPlot, "bool ()")
		.def("isProbabilityUnitMultiply", &CvEventTriggerInfo::isProbabilityUnitMultiply, "bool ()")
		.def("isProbabilityBuildingMultiply", &CvEventTriggerInfo::isProbabilityBuildingMultiply, "bool ()")
		.def("isPrereqEventCity", &CvEventTriggerInfo::isPrereqEventCity, "bool ()")
		.def("isFrontPopup", &CvEventTriggerInfo::isFrontPopup, "bool ()")
		;
	python::class_<CvEventInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvEventInfo")
		.def("isQuest", &CvEventInfo::isQuest, "bool ()")
		.def("isGlobal", &CvEventInfo::isGlobal, "bool ()")
		.def("isTeam", &CvEventInfo::isTeam, "bool ()")
		.def("isCityEffect", &CvEventInfo::isCityEffect, "bool ()")
		.def("isOtherPlayerCityEffect", &CvEventInfo::isOtherPlayerCityEffect, "bool ()")
		.def("isGoldToPlayer", &CvEventInfo::isGoldToPlayer, "bool ()")
		.def("isDeclareWar", &CvEventInfo::isDeclareWar, "bool ()")
		.def("isDisbandUnit", &CvEventInfo::isDisbandUnit, "bool ()")
		.def("getGold", &CvEventInfo::getGold, "int ()")
		.def("getRandomGold", &CvEventInfo::getRandomGold, "int ()")
		.def("getCulture", &CvEventInfo::getCulture, "int ()")
		.def("getUnitClass", &CvEventInfo::getUnitClass, "int ()")
		.def("getNumUnits", &CvEventTriggerInfo::getNumUnits, "int ()")
		.def("getBuildingClass", &CvEventInfo::getBuildingClass, "int ()")
		.def("getBuildingChange", &CvEventInfo::getBuildingChange, "int ()")
		.def("getFood", &CvEventInfo::getFood, "int ()")
		.def("getFoodPercent", &CvEventInfo::getFoodPercent, "int ()")
		.def("getFeature", &CvEventInfo::getFeature, "int ()")
		.def("getFeatureChange", &CvEventInfo::getFeatureChange, "int ()")
		.def("getImprovement", &CvEventInfo::getImprovement, "int ()")
		.def("getImprovementChange", &CvEventInfo::getImprovementChange, "int ()")
		.def("getRoute", &CvEventInfo::getRoute, "int ()")
		.def("getRouteChange", &CvEventInfo::getRouteChange, "int ()")
		.def("getBonusRevealed", &CvEventInfo::getBonusRevealed, "int ()")
		.def("getUnitExperience", &CvEventInfo::getUnitExperience, "int ()")
		.def("getUnitImmobileTurns", &CvEventInfo::getUnitImmobileTurns, "int ()")
		.def("getOurAttitudeModifier", &CvEventInfo::getOurAttitudeModifier, "int ()")
		.def("getAttitudeModifier", &CvEventInfo::getAttitudeModifier, "int ()")
		.def("getTheirEnemyAttitudeModifier", &CvEventInfo::getTheirEnemyAttitudeModifier, "int ()")
		.def("getPopulationChange", &CvEventInfo::getPopulationChange, "int ()")
		.def("getRevoltTurns", &CvEventInfo::getRevoltTurns, "int ()")
		.def("getMinPillage", &CvEventInfo::getMinPillage, "int ()")
		.def("getMaxPillage", &CvEventInfo::getMaxPillage, "int ()")
		.def("getUnitPromotion", &CvEventInfo::getUnitPromotion, "int ()")
		.def("getAIValue", &CvEventInfo::getAIValue, "int ()")
		// TAC - Generic Parameters for Events - Ray - START
		.def("getGenericParameter", &CvEventInfo::getGenericParameter, "int (int)")
		// TAC - Generic Parameters for Events - Ray - END
		.def("getAdditionalEventChance", &CvEventInfo::getAdditionalEventChance, "int (int)")
		.def("getAdditionalEventTime", &CvEventInfo::getAdditionalEventTime, "int (int)")
		.def("getClearEventChance", &CvEventInfo::getClearEventChance, "int (int)")
		.def("getPlotExtraYield", &CvEventInfo::getPlotExtraYield, "int (int)")
		.def("getUnitCombatPromotion", &CvEventInfo::getUnitCombatPromotion, "int (int)")
		.def("getUnitClassPromotion", &CvEventInfo::getUnitClassPromotion, "int (int)")
		.def("getBuildingYieldChange", &CvEventInfo::getBuildingYieldChange, "int (int /*BuildingClassTypes*/, int /*YieldTypes*/)")
		.def("getNumBuildingYieldChanges", &CvEventInfo::getNumBuildingYieldChanges, "int ()")
		;
	python::class_<CvMainMenuInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvMainMenuInfo")
		.def("getScene", &CvMainMenuInfo::getScene, "string ()")
		.def("getSoundtrack", &CvMainMenuInfo::getSoundtrack, "string ()")
		.def("getLoading", &CvMainMenuInfo::getLoading, "string ()")
		.def("getLoadingSlideshow", &CvMainMenuInfo::getLoadingSlideshow, "string ()")
		;
	python::class_<CvProfessionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvProfessionInfo")
		.def("getUnitCombatType", &CvProfessionInfo::getUnitCombatType, "int ()")
		// TAC - LbD - Ray - START
		.def("LbD_isUsed", &CvProfessionInfo::LbD_isUsed, "bool ()")
		.def("LbD_getExpert", &CvProfessionInfo::LbD_getExpert, "int ()")
		.def("LbD_getLearnLevel", &CvProfessionInfo::LbD_getLearnLevel, "int ()")
		// TAC - LbD - Ray - END
		.def("getDefaultUnitAIType", &CvProfessionInfo::getDefaultUnitAIType, "int ()")
		// R&R, ray , MYCP partially based on code of Aymerick - START
		//.def("getYieldProduced", &CvProfessionInfo::getYieldProduced, "int ()")
		//.def("getYieldConsumed", &CvProfessionInfo::getYieldConsumed, "int ()")
		// R&R, ray , MYCP partially based on code of Aymerick - END
		.def("getSpecialBuilding", &CvProfessionInfo::getSpecialBuilding, "int ()")
		.def("getCombatChange", &CvProfessionInfo::getCombatChange, "int ()")
		.def("getMovesChange", &CvProfessionInfo::getMovesChange, "int ()")
		.def("getWorkRate", &CvProfessionInfo::getWorkRate, "int ()")
		.def("getMissionaryRate", &CvProfessionInfo::getMissionaryRate, "int ()")
		.def("getNativeTradeRate", &CvProfessionInfo::getNativeTradeRate, "int ()") // WTP, ray, Native Trade Posts - START
		.def("isWorkPlot", &CvProfessionInfo::isWorkPlot, "bool ()")
		.def("isCitizen", &CvProfessionInfo::isCitizen, "bool ()")
		.def("isWater", &CvProfessionInfo::isWater, "bool ()")
		.def("isScout", &CvProfessionInfo::isScout, "bool ()")
		.def("isCityDefender", &CvProfessionInfo::isCityDefender, "bool ()")
		.def("canFound", &CvProfessionInfo::canFound, "bool ()")
		.def("isUnarmed", &CvProfessionInfo::isUnarmed, "bool ()")
		.def("isNoDefensiveBonus", &CvProfessionInfo::isNoDefensiveBonus, "bool ()")
		.def("getYieldEquipmentAmount", &CvProfessionInfo::getYieldEquipmentAmount, "int (int /*YieldTypes*/ iYieldType)")
		.def("isFreePromotion", &CvProfessionInfo::isFreePromotion, "bool (int /*PromotionTypes*/ iPromotionType)")
		// R&R, ray , MYCP partially based on code of Aymerick - START
		.def("getYieldsProduced", &CvProfessionInfo::getYieldsProduced, "int (int)")
		.def("getNumYieldsProduced", &CvProfessionInfo::getNumYieldsProduced, "int ()")
		.def("getYieldsConsumed", &CvProfessionInfo::getYieldsConsumed, "int (int)")
		.def("getNumYieldsConsumed", &CvProfessionInfo::getNumYieldsConsumed, "int ()")
		// R&R, ray , MYCP partially based on code of Aymerick - END
		;
	python::class_<CvFatherInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvFatherInfo")
		.def("getFatherCategory", &CvFatherInfo::getFatherCategory, "int ()")
		.def("getTrait", &CvFatherInfo::getTrait, "int ()")
		.def("getFreeUnits", &CvFatherInfo::getFreeUnits, "int (int)")
		.def("getPointCost", &CvFatherInfo::getPointCost, "int (int)")
		.def("isRevealImprovement", &CvFatherInfo::isRevealImprovement, "bool (int)")
		.def("getPortrait", &CvFatherInfo::getPortrait, "string ()")
		;
	python::class_<CvFatherPointInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvFatherInfo")
		.def("getChar", &CvFatherPointInfo::getChar, "int ()")
		.def("getLandTilePoints", &CvFatherPointInfo::getLandTilePoints, "int ()")
		.def("getWaterTilePoints", &CvFatherPointInfo::getWaterTilePoints, "int ()")
		.def("getMeetNativePoints", &CvFatherPointInfo::getMeetNativePoints, "int ()")
		.def("getScoutVillagePoints", &CvFatherPointInfo::getScoutVillagePoints, "int ()")
		.def("getGoodyPoints", &CvFatherPointInfo::getGoodyPoints, "int ()")
		.def("getExperiencePoints", &CvFatherPointInfo::getExperiencePoints, "int ()")
		.def("getConquerCityPoints", &CvFatherPointInfo::getConquerCityPoints, "int ()")
		.def("getRazeCityPoints", &CvFatherPointInfo::getRazeCityPoints, "int ()")
		.def("getMissionaryPoints", &CvFatherPointInfo::getMissionaryPoints, "int ()")
		.def("getEuropeTradeGoldPointPercent", &CvFatherPointInfo::getEuropeTradeGoldPointPercent, "int ()")
		.def("getNativeTradeGoldPointPercent", &CvFatherPointInfo::getNativeTradeGoldPointPercent, "int ()")
		.def("getBuildingPoints", &CvFatherPointInfo::getBuildingPoints, "int (int iBuildingClass)")
		.def("getYieldPoints", &CvFatherPointInfo::getYieldPoints, "int (int iYield)")
		;
	python::class_<CvAlarmInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvAlarmInfo")
		.def("getRange", &CvAlarmInfo::getRange, "int ()")
		.def("getColony", &CvAlarmInfo::getColony, "int ()")
		.def("getNumColonies", &CvAlarmInfo::getNumColonies, "int ()")
		.def("getPopulation", &CvAlarmInfo::getPopulation, "int ()")
		.def("getUnit", &CvAlarmInfo::getUnit, "int ()")
		.def("getMissionary", &CvAlarmInfo::getMissionary, "int ()")
		.def("getAttitudeDivisor", &CvAlarmInfo::getAttitudeDivisor, "int ()")
		;
	// PatchMod: Achievements START
	python::class_<CvAchieveInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvAchieveInfo")
		.def("getPictureFileName", &CvAchieveInfo::getPictureFileName, "string ()")
		;
	// PatchMod: Achievements END
}
