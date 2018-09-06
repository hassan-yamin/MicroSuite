// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: union.proto
#ifndef GRPC_union_2eproto__INCLUDED
#define GRPC_union_2eproto__INCLUDED

#include "union.pb.h"

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

namespace union_service {

class UnionService final {
 public:
  static constexpr char const* service_full_name() {
    return "union_service.UnionService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Defining service between load generator and union.
    // Input: Queries, number of nearest neighbors to compute.
    // Output: K-nn
    virtual ::grpc::Status Union(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::union_service::UnionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::union_service::UnionResponse>> AsyncUnion(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::union_service::UnionResponse>>(AsyncUnionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::union_service::UnionResponse>> PrepareAsyncUnion(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::union_service::UnionResponse>>(PrepareAsyncUnionRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::union_service::UnionResponse>* AsyncUnionRaw(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::union_service::UnionResponse>* PrepareAsyncUnionRaw(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Union(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::union_service::UnionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::union_service::UnionResponse>> AsyncUnion(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::union_service::UnionResponse>>(AsyncUnionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::union_service::UnionResponse>> PrepareAsyncUnion(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::union_service::UnionResponse>>(PrepareAsyncUnionRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::union_service::UnionResponse>* AsyncUnionRaw(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::union_service::UnionResponse>* PrepareAsyncUnionRaw(::grpc::ClientContext* context, const ::union_service::UnionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Union_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Defining service between load generator and union.
    // Input: Queries, number of nearest neighbors to compute.
    // Output: K-nn
    virtual ::grpc::Status Union(::grpc::ServerContext* context, const ::union_service::UnionRequest* request, ::union_service::UnionResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Union : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Union() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Union() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Union(::grpc::ServerContext* context, const ::union_service::UnionRequest* request, ::union_service::UnionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUnion(::grpc::ServerContext* context, ::union_service::UnionRequest* request, ::grpc::ServerAsyncResponseWriter< ::union_service::UnionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Union<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Union : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Union() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Union() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Union(::grpc::ServerContext* context, const ::union_service::UnionRequest* request, ::union_service::UnionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Union : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Union() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::union_service::UnionRequest, ::union_service::UnionResponse>(std::bind(&WithStreamedUnaryMethod_Union<BaseClass>::StreamedUnion, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Union() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Union(::grpc::ServerContext* context, const ::union_service::UnionRequest* request, ::union_service::UnionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedUnion(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::union_service::UnionRequest,::union_service::UnionResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Union<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Union<Service > StreamedService;
};

}  // namespace union_service


#endif  // GRPC_union_2eproto__INCLUDED
