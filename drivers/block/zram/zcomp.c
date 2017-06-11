
	struct zcomp_strm *zstrm = kmalloc(sizeof(*zstrm), GFP_NOIO);
	zstrm->buffer = (void *)__get_free_pages(GFP_NOIO | __GFP_ZERO, 1);
		zcomp_strm_single_create(comp);
	if (!comp->stream) {
		kfree(comp);
		return ERR_PTR(-ENOMEM);
	}
	return comp;
}
