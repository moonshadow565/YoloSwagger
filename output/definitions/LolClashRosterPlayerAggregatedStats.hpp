#ifndef SWAGGER_TYPES_LolClashRosterPlayerAggregatedStats_HPP
#define SWAGGER_TYPES_LolClashRosterPlayerAggregatedStats_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClashRosterPlayerAggregatedStats {
'    // 
    std::map<std::string, int32_t> rawStatsMax;
    // 
    std::map<std::string, int32_t> rawStatsSum;
  };

  void to_json(nlohmann::json& j, const LolClashRosterPlayerAggregatedStats& v) {
    j["rawStatsMax"] = v.rawStatsMax;
    j["rawStatsSum"] = v.rawStatsSum;
  }

  void from_json(const nlohmann::json& j, LolClashRosterPlayerAggregatedStats& v) {
    v.rawStatsMax = j.at("rawStatsMax").get<std::map<std::string, int32_t>>;
    v.rawStatsSum = j.at("rawStatsSum").get<std::map<std::string, int32_t>>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPlayerAggregatedStats_HPP
