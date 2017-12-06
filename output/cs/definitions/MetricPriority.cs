using System.Runtime.Serialization;
namespace leagueapi {
  [DataContract]  enum MetricPriority {
    [DataMember(Name = "high")]
    High = 2,

    [DataMember(Name = "low")]
    Low = 0,

    [DataMember(Name = "medium")]
    Medium = 1,

  }
}