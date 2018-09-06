// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: intersection.proto
#ifndef GRPC_intersection_2eproto__INCLUDED
#define GRPC_intersection_2eproto__INCLUDED

#include "intersection.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace intersection {

class IntersectionService final {
 public:
  static constexpr char const* service_full_name() {
    return "intersection.IntersectionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Intersection(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::intersection::IntersectionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::intersection::IntersectionResponse>> AsyncIntersection(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::intersection::IntersectionResponse>>(AsyncIntersectionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::intersection::IntersectionResponse>> PrepareAsyncIntersection(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::intersection::IntersectionResponse>>(PrepareAsyncIntersectionRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::intersection::IntersectionResponse>* AsyncIntersectionRaw(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::intersection::IntersectionResponse>* PrepareAsyncIntersectionRaw(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Intersection(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::intersection::IntersectionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::intersection::IntersectionResponse>> AsyncIntersection(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::intersection::IntersectionResponse>>(AsyncIntersectionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::intersection::IntersectionResponse>> PrepareAsyncIntersection(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::intersection::IntersectionResponse>>(PrepareAsyncIntersectionRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::intersection::IntersectionResponse>* AsyncIntersectionRaw(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::intersection::IntersectionResponse>* PrepareAsyncIntersectionRaw(::grpc::ClientContext* context, const ::intersection::IntersectionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Intersection_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Intersection(::grpc::ServerContext* context, const ::intersection::IntersectionRequest* request, ::intersection::IntersectionResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Intersection : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Intersection() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Intersection() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Intersection(::grpc::ServerContext* context, const ::intersection::IntersectionRequest* request, ::intersection::IntersectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestIntersection(::grpc::ServerContext* context, ::intersection::IntersectionRequest* request, ::grpc::ServerAsyncResponseWriter< ::intersection::IntersectionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Intersection<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Intersection : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Intersection() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Intersection() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Intersection(::grpc::ServerContext* context, const ::intersection::IntersectionRequest* request, ::intersection::IntersectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Intersection : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Intersection() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::intersection::IntersectionRequest, ::intersection::IntersectionResponse>(std::bind(&WithStreamedUnaryMethod_Intersection<BaseClass>::StreamedIntersection, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Intersection() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Intersection(::grpc::ServerContext* context, const ::intersection::IntersectionRequest* request, ::intersection::IntersectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedIntersection(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::intersection::IntersectionRequest,::intersection::IntersectionResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Intersection<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Intersection<Service > StreamedService;
};

}  // namespace intersection


#endif  // GRPC_intersection_2eproto__INCLUDED