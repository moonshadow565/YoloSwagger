#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsChampionSkinEmblem.hpp"
#include "LolChampionsGameDataChampionChroma.hpp"
namespace leagueapi {
  struct LolChampionsGameDataChampionSkin_t {
    std::optional<std::string> splashVideoPath;
    std::string tilePath;
    std::vector<LolChampionsGameDataChampionChroma_t> chromas;
    std::optional<std::string> featuresText;
    std::string splashPath;
    std::optional<std::string> skinType;
    std::string uncenteredSplashPath;
    std::vector<LolChampionsCollectionsChampionSkinEmblem_t> emblems;
    std::optional<std::string> chromaPath;
    int32_t id;
    std::string rarityGemPath;
    std::string cardPath;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionSkin_t& v) {
    if(v.splashVideoPath)
      j["splashVideoPath"] = *v.splashVideoPath;
    j["tilePath"] = v.tilePath;
    j["chromas"] = v.chromas;
    if(v.featuresText)
      j["featuresText"] = *v.featuresText;
    j["splashPath"] = v.splashPath;
    if(v.skinType)
      j["skinType"] = *v.skinType;
    j["uncenteredSplashPath"] = v.uncenteredSplashPath;
    j["emblems"] = v.emblems;
    if(v.chromaPath)
      j["chromaPath"] = *v.chromaPath;
    j["id"] = v.id;
    j["rarityGemPath"] = v.rarityGemPath;
    j["cardPath"] = v.cardPath;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionSkin_t& v) {
    if(auto it = j.find("splashVideoPath"); it != j.end() !it->is_null())
      v.splashVideoPath = it->get<std::string>();
    v.tilePath = j.at("tilePath").get<std::string>();
    v.chromas = j.at("chromas").get<std::vector<LolChampionsGameDataChampionChroma_t>>();
    if(auto it = j.find("featuresText"); it != j.end() !it->is_null())
      v.featuresText = it->get<std::string>();
    v.splashPath = j.at("splashPath").get<std::string>();
    if(auto it = j.find("skinType"); it != j.end() !it->is_null())
      v.skinType = it->get<std::string>();
    v.uncenteredSplashPath = j.at("uncenteredSplashPath").get<std::string>();
    v.emblems = j.at("emblems").get<std::vector<LolChampionsCollectionsChampionSkinEmblem_t>>();
    if(auto it = j.find("chromaPath"); it != j.end() !it->is_null())
      v.chromaPath = it->get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.rarityGemPath = j.at("rarityGemPath").get<std::string>();
    v.cardPath = j.at("cardPath").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
}
