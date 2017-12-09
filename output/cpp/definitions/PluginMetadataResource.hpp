#pragma once
#include <json.hpp>
#include <optional>
#include "PluginThreadingModel.hpp"
namespace leagueapi {
  struct PluginMetadataResource_t {
    std::map<std::string, std::string> implements;
    std::string app;
    bool hasBundledAssets;
    std::map<std::string, nlohmann::json> perLocaleAssetBundles;
    std::vector<std::string> globalAssetBundles;
    std::string subtype;
    PluginThreadingModel_t threading;
    std::string type;
    std::string feature;
  };

  inline void to_json(nlohmann::json& j, const PluginMetadataResource_t& v) {
    j["implements"] = v.implements;
    j["app"] = v.app;
    j["hasBundledAssets"] = v.hasBundledAssets;
    j["perLocaleAssetBundles"] = v.perLocaleAssetBundles;
    j["globalAssetBundles"] = v.globalAssetBundles;
    j["subtype"] = v.subtype;
    j["threading"] = v.threading;
    j["type"] = v.type;
    j["feature"] = v.feature;
  }

  inline void from_json(const nlohmann::json& j, PluginMetadataResource_t& v) {
    v.implements = j.at("implements").get<std::map<std::string, std::string>>();
    v.app = j.at("app").get<std::string>();
    v.hasBundledAssets = j.at("hasBundledAssets").get<bool>();
    v.perLocaleAssetBundles = j.at("perLocaleAssetBundles").get<std::map<std::string, nlohmann::json>>();
    v.globalAssetBundles = j.at("globalAssetBundles").get<std::vector<std::string>>();
    v.subtype = j.at("subtype").get<std::string>();
    v.threading = j.at("threading").get<PluginThreadingModel_t>();
    v.type = j.at("type").get<std::string>();
    v.feature = j.at("feature").get<std::string>();
  }
  inline std::string to_string(const PluginMetadataResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
