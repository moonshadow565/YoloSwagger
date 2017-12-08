#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkSettingResource_t {
    int32_t_t perkStyle;
    std::vector<int32_t> perkIds;
    int32_t_t perkSubStyle;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkSettingResource_t& v) {
    j["perkStyle"] = v.perkStyle;
    j["perkIds"] = v.perkIds;
    j["perkSubStyle"] = v.perkSubStyle;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkSettingResource_t& v) {
    v.perkStyle = j.at("perkStyle").get<int32_t_t>();
    v.perkIds = j.at("perkIds").get<std::vector<int32_t>>();
    v.perkSubStyle = j.at("perkSubStyle").get<int32_t_t>();
  }
  inline std::string to_string(const LolPerksPerkSettingResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
