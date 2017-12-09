#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Adds/updates a common data key and value to be sent with every subsequent event.
  void PostTelemetryV1CommonDataByKey (const ClientInfo& info,
    //The name of the common data key
    const std::string& key,
    //The value of the common data key
    const std::string& value)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(value).dump();
    std::string path = "/telemetry/v1/common-data/"+UrlCode::encode(to_string(key))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
