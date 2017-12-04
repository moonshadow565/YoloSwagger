#ifndef SWAGGER_TYPES_LolClashRosterPeriodAggregatedStats_HPP
#define SWAGGER_TYPES_LolClashRosterPeriodAggregatedStats_HPP
#include <json.hpp>
#include "LolClashRosterMatchAggregatedStats.hpp"
namespace test {
  // 
  struct LolClashRosterPeriodAggregatedStats {
'    // 
    int32_t bracketSize;
    // 
    std::vector<LolClashRosterMatchAggregatedStats> matchStats;
    // 
    int32_t period;
    // 
    int64_t time;
  };

  void to_json(nlohmann::json& j, const LolClashRosterPeriodAggregatedStats& v) {
    j["bracketSize"] = v.bracketSize;
    j["matchStats"] = v.matchStats;
    j["period"] = v.period;
    j["time"] = v.time;
  }

  void from_json(const nlohmann::json& j, LolClashRosterPeriodAggregatedStats& v) {
    v.bracketSize = j.at("bracketSize").get<int32_t>;
    v.matchStats = j.at("matchStats").get<std::vector<LolClashRosterMatchAggregatedStats>>;
    v.period = j.at("period").get<int32_t>;
    v.time = j.at("time").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashRosterPeriodAggregatedStats_HPP
