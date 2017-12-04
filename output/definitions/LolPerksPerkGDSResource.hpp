#ifndef SWAGGER_TYPES_LolPerksPerkGDSResource_HPP
#define SWAGGER_TYPES_LolPerksPerkGDSResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksPerkGDSResource {
    // 
    std::string iconPath;
    // 
    int32_t id;
    // 
    std::string longDesc;
    // 
    std::string name;
    // 
    std::string shortDesc;
    // 
    std::string tooltip;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkGDSResource& v) {
    j["iconPath"] = v.iconPath;
    j["id"] = v.id;
    j["longDesc"] = v.longDesc;
    j["name"] = v.name;
    j["shortDesc"] = v.shortDesc;
    j["tooltip"] = v.tooltip;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkGDSResource& v) {
    v.iconPath = j.at("iconPath").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.longDesc = j.at("longDesc").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.shortDesc = j.at("shortDesc").get<std::string>;
    v.tooltip = j.at("tooltip").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkGDSResource_HPP
