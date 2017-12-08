#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionChroma.hpp"
#include "LolChampionsCollectionsOwnership.hpp"
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsChampionSkin_t {
    int32_t championId;
    std::string name;
    std::string uncenteredSplashPath;
    std::vector<LolChampionsCollectionsChampionChroma_t> chromas;
    std::string splashPath;
    bool stillObtainable;
    std::string cardPath;
    bool disabled;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::optional<std::string> skinType;
    std::optional<std::string> splashVideoPath;
    LolChampionsCollectionsOwnership_t ownership;
    std::string tilePath;
    int32_t id;
    bool isBase;
    bool lastSelected;
    std::optional<std::string> featuresText;
    std::optional<std::string> chromaPath;
    std::string rarityGemPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsChampionSkin_t& v) {
    j["championId"] = v.championId;
    j["name"] = v.name;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["chromas"] = v.chromas;
    j["splashPath"] = v.splashPath;
    j["stillObtainable"] = v.stillObtainable;
    j["cardPath"] = v.cardPath;
    j["disabled"] = v.disabled;
    j["emblems"] = v.emblems;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["ownership"] = v.ownership;
    j["tilePath"] = v.tilePath;
    j["id"] = v.id;
    j["isBase"] = v.isBase;
    j["lastSelected"] = v.lastSelected;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["rarityGemPath"] = v.rarityGemPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsChampionSkin_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsCollectionsChampionChroma_t>>();
    v.splashPath = j.at("splashPath").get<std::string>();
    v.stillObtainable = j.at("stillObtainable").get<bool>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.disabled = j.at("disabled").get<bool>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    if(auto it = j.find("skinType"); it != j.end() && !it->is_null())
      v.skinType = it->get<std::string>();
    if(auto it = j.find("splashVideoPath"); it != j.end() && !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.ownership = j.at("ownership").get<LolChampionsCollectionsOwnership_t>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.isBase = j.at("isBase").get<bool>();
    v.lastSelected = j.at("lastSelected").get<bool>();
    if(auto it = j.find("featuresText"); it != j.end() && !it->is_null())
      v.featuresText = it->get<std::string>();
    if(auto it = j.find("chromaPath"); it != j.end() && !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsCollectionsChampionSkin_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
