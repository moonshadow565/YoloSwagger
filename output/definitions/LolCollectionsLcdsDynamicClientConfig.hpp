#ifndef SWAGGER_TYPES_LolCollectionsLcdsDynamicClientConfig_HPP
#define SWAGGER_TYPES_LolCollectionsLcdsDynamicClientConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolCollectionsLcdsDynamicClientConfig {
    // 
    nlohmann::json DisabledChampions;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLcdsDynamicClientConfig& v) {
    j["DisabledChampions"] = v.DisabledChampions;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLcdsDynamicClientConfig& v) {
    v.DisabledChampions = j.at("DisabledChampions").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolCollectionsLcdsDynamicClientConfig_HPP
