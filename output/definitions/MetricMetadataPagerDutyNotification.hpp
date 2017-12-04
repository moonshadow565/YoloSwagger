#ifndef SWAGGER_TYPES_MetricMetadataPagerDutyNotification_HPP
#define SWAGGER_TYPES_MetricMetadataPagerDutyNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MetricMetadataPagerDutyNotification {
    // 
    std::string apikey;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataPagerDutyNotification& v) {
    j["apikey"] = v.apikey;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataPagerDutyNotification& v) {
    v.apikey = j.at("apikey").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataPagerDutyNotification_HPP
